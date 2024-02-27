CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=gnu89

SRC = shell.c built_in.c env.c errors.c exit.c get_line.c getenv.c histo.c lists.c loop.c memory.c parser.c string.c token.c variables.c atoi.c get_info.c
OBJ = $(SRC:.c=.o)

TARGET = simple_shell

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -std=c99 -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

