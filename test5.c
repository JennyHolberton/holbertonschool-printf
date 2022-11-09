#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int func_return (const char* specifier, va_list ap)
{
	int i = 0;

	d_types print_array [] = {
	{"c", print_char},
	{"s", print_str},
	{"%", print_percent},
	{NULL, NULL}
};
	while (print_array[i].ptr != NULL)
	{
		if (print_array[i].ptr[0] == *(specifier))
		{
			return (print_array[i].f(ap));
		}
		i = i + 1;
	}
	return (-1);
}

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int num_of_chars = 0;
	char *str;
	int n;

    	va_start (ap, format);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			n = func_return (&format[i], ap);
			if (format[i + 1] == 'd')
			{
				n = va_arg(ap, int);
				write(1, &n, sizeof(int)));
				i = i + 1;
				num_of_chars = num_of_chars + 1;
			}
		}
		else
		{
			putchar(format[i]);
			num_of_chars = num_of_chars + 1;
		}
		i = i + 1;
	}

	va_end(ap);
	return (num_of_chars);
}

void main()
{
	char h;
	int i;
	char *string;
	int len, len1;
	int x;

	string = "Hello";
	i = '%';
	x = 1234;
	_printf("This is a == %d\n", x);
	printf("This is a == %d\n", x);
	printf("_printf = %d, printf = %d\n", len, len1);
}
