#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

#define MAX_INPUT_LENGTH 1024


void display_prompt();
char *read_input();
char **parse_input(char *input);
int execute_command(char **args);
void free_args(char **args);

#endif /* SHELL_H */

