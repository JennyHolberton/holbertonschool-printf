CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
RM=rm -rf
SRC=print_char.c print_int.c print_specifier.c _printf.c main.c
TARGET=_printf

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET)

re: clean all

dev:
	$(CC) $(SRC) -o $(TARGET)

betty:
	betty $(SRC)
