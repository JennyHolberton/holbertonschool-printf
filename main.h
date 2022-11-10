#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

struct specifiers
{
	char *ptr;
	int (*f)(va_list ap);
};
typedef struct specifiers specifiers_t;

int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_percent(va_list ap);
int print_int(va_list ap);
int _print_int(int num);
int _printf(const char *format, ...);

#endif /* _MAIN_H_ */
