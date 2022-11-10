CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format
RM=rm -rf
SRC=function_char.c function_int.c _printf.c test.c
TARGET=_printf

all:
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET)

re: clean all

dev:
	$(CC) $(SRC) -o $(TARGET)
