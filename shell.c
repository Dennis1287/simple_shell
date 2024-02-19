#include "shell.h"

int main(void) {
    char *line = NULL;
    char **args = NULL;
    int status;

    do{
	    display_prompt();
	    free(line);
	    line = read_input();
	    if (line == NULL) {
		    break;
	    }
	    free(args);
	    args = parse_input(line);
	    if (args == NULL) {
		    continue;
	    }
	    status = execute_command(args);
    } while (status);	

    return 0;
    }

void display_prompt() {
    printf("($) ");
    fflush(stdout);
}

