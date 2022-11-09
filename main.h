#ifndef _MAIN_H_
#define _MAIN_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

struct datatypes
{
    char is_c;
    char is_s;
    char is_percent;
	/*long as_long;
    float as_float;
    double as_double;
    void* as_ptr*/
};
typedef struct datatypes
{
	char *ptr;
	int (*f)(va_arg type);
} d_types;

int _putchar(char c);
int print_char(va_list type);
int print_str(va_list type);
int print_percent(va_list type);

int _printf(const char *format, ...);

#endif /* _MAIN_H_ */
