#ifndef _SHELL_H_
#define _SHELL_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <signal.h>
#include <limits.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <sys/types.h>

/**
 * struct variables - Structure variables
 * @av: Command line arguments
 * @buffer: Buffer
 * @env: Environment variables
 * @count: Command count
 * @argv: Shell opening arguments
 * @status: Exit status
 * @commands: Double pointer to commands
 */
typedef struct variables
{
	char **av;
	char *buffer;
	char **env;
	size_t count;
	char **argv;
	int status;
	char **commands;
} vars_t;

/**
 * struct builtins - Builtin function structure
 * @name: Builtin command name
 * @f: Corresponding builtin function
 */
typedef struct builtins
{
	char *name;
	void (*f)(vars_t *);
} builtins_t;

/**
 * struct signal_flag - Signal flag
 * @sig_flag: signal flag for terminal
 */
typedef struct signal_flag
{
	unsigned int sig_flag;
} sigflag_t;

char **make_env(char **env);
void free_env(char **env);
ssize_t _puts(char *str);
char *_strdup(char *strtodup);
int _strcmpr(char *strcmp1, char *strcmp2);
char *_strcat(char *strc1, char *strc2);
unsigned int _strlen(char *str);
char **tokenize(char *buffer, char *delimiter);
char **_realloc(char **ptr, size_t *size);
char *new_strtok(char *str, const char *delim);
void (*check_for_builtins(vars_t *vars))(vars_t *vars);
void new_exit(vars_t *vars);
void _env(vars_t *vars);
void new_setenv(vars_t *vars);
void new_unsetenv(vars_t *vars);
void add_key(vars_t *vars);
char **find_key(char **env, char *key);
char *add_value(char *key, char *value);
int _atoi(char *str);
void check_for_path(vars_t *vars);
int path_execute(char *command, vars_t *vars);
char *find_path(char **env);
int execute_cwd(vars_t *vars);
int check_for_dir(char *str);
void print_error(vars_t *vars, char *msg);
void _puts2(char *str);
char *_uitoa(unsigned int count);

#endif
