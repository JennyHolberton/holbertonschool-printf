#include "main.h"

int func_return (const char* specifier, va_list ap)
{
	specifiers_t print_array[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};

	int i = 0;
	while (print_array[i].ptr != NULL)
	{
		if (*(print_array[i].ptr) == *specifier)
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
	int n;

    	va_start (ap, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			n = func_return(format + 1, ap);
			num_of_chars = num_of_chars + n;
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
