#include "shell.h"

char *read_input() {
    char *input = malloc(sizeof(char) * MAX_INPUT_LENGTH);

    if (!input) {
        perror("Allocation error");
        exit(EXIT_FAILURE);
    }

    if (fgets(input, MAX_INPUT_LENGTH, stdin) == NULL) {
        if (feof(stdin)) {
            printf("\n");
            exit(EXIT_SUCCESS);
        } else {
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
    }

    return input;
}

void free_args(char **args) {
    int i;
    for (i = 0; args[i] != NULL; i++) {
        free(args[i]);
    }
  
}

