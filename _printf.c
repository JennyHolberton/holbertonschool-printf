#include "main.h"

/**
 * func_return - finds correct func according to the specifier
 * @specifier: pointer to specifier char to be checked
 * @ap: pointer to the array of actual specifiers
 * Return: number of characters
 */

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
	while (print_array[i].ptr != NULL && specifier != NULL)
	{
		if (*(print_array[i].ptr) == *specifier)
		{
			return (print_array[i].f(ap));
		}
		i = i + 1;
	}
	return (-1);
}

/**
 * _printf - prints a given string including specified characters or numbers
 * @format: pointer to specifier char to be checked
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int num_of_chars = 0;
	int func_ptr;

    	va_start (ap, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				func_ptr = func_return(format, ap);
				i = i + 1;
				num_of_chars = num_of_chars + func_ptr;
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
