CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -std=gnu89
RM=rm -rf

TARGET0=a
SRC0=    test1.c

TARGET1=b
SRC1= 	 test2.c

all: 0 1

clean:
	$(RM) *~ \#*\# \.\#* \
        $(TARGET0) $(TARGET1)

re: clean all

0:
	$(CC) $(CFLAGS) $(SRC0) -o $(TARGET0)

1:
	$(CC) $(CFLAGS) $(SRC1) -o $(TARGET1)
