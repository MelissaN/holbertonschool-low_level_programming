#ifndef SHELL
#define SHELL

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <dirent.h>
#include <signal.h>
#include <string.h>

/* global variable for environmental variables */
extern char **environ;

/* some function prototypes */
int _getline(char **cmd);
char **_strtok(char *cmd);
void _execve(char cmd[]);
char *_strdup(char *str);
char *c_strdup(char *str, int cs);
char * _getenv();
char *_which(char *cmd);

#endif
