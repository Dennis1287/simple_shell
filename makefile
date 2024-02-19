CC = gcc
CFLAGS = -Wall -Wextra -pedantic -std=gnu89

SRC = shell.c execute.c parser.c utils.c
OBJ = $(SRC:.c=.o)

TARGET = simple_shell

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(TARGET)

%.o: %.c
	$(CC) $(CFLAGS) -std=c99 -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)

