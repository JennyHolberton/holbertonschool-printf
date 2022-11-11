#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
/**
 * struct specifier - Structure to hold specifier and print function pointer
 *
 * @ptr: Pointer to specifier
 * @print: Pointer to function
 **/
typedef struct specifier
{
	char *ptr;
	int (*print)(va_list ap);
} specifier_t;

int _putchar(char c);
int print_char(va_list ap);
int print_str(va_list ap);
int print_digits(va_list ap);
int _print_int(int num);
int print_int(va_list ap);

int _printf(const char *format, ...);
int print_specifier(const char *specifier, va_list ap);
#endif /*_MAIN_H_*/
