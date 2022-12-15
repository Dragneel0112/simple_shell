# **A Simple Shell Recreation**

## Introduction

This is a simple UNIX command interpreter that replicates the **sh** program on Linux. Once installed our shell will display a prompt and wait for the user to type a command that always ends with a new line. The prompt will always be displayed after a command has been executed in order to make user experience easy. If the command cannot be executed, print error will be displayed in the terminal and the prompt will be displayed again.

---

## How to use
Clone the repository:
```
$ git clone https://github.com/Dragneel0112/simple_shell.git
```
Change directories into the repository:
```sh
cd simple_shell
```
Compile:
```sh
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```
Run the shell in interactive mode:
```sh
$./hsh
```
Or run the shell in non-interactive mode:
```sh
$ echo "/bin/ls" | ./hsh
```
To exit:
```sh
press 'Ctrl-D' or enter 'exit'
```
---

## Test Output Example
The shell will function like this in interactive mode:
```sh
$ /bin/ls
hsh shell.h shell.c
```
```sh
$ pwd
/simple_shell
```
```sh
$ ls -l
drwxrwxr-x 7 vagrant vagrant  4096 Apr  7 01:48 hsh
-rw-rw-r-- 1 vagrant vagrant   148 Apr  7 00:00 shell.h
-rwxrw-r-- 1 vagrant vagrant    28 Apr  7 15:35 shell.c
```
But also in non-interactive mode:
```sh
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c
```
```sh
$ echo "pwd" | ./hsh
/simple_shell
```
### To exit program in interactive mode:

The output of this program when executed it look like:
```sh
exit
```
---
## **Authors:**

### *Ruven Pillay and Eleazar Nhamuave*
---
