#include "shell.h"

char **parse_input(char *input) {
    char **args = malloc(sizeof(char *) * MAX_INPUT_LENGTH);
    char *token;
    int i = 0;

    if (!args) {
        perror("Allocation error");
        exit(EXIT_FAILURE);
    }

    token = strtok(input, " \t\n");
    while (token != NULL) {
        args[i++] = token;
        token = strtok(NULL, " \t\n");
    }
    args[i] = NULL;

    return args;
}

