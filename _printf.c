#include "main.h"
/**
 * _printf - prints a given string including specified characters or numbers
 * @format: pointer to char in string passed
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0, num_of_chars = 0, size;

	va_start(ap, format);

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			size = print_specifier(&(format[i + 1]), ap);
			if (size == -1)
			{
				return (-1);
			}
			i = i + 1;
		}
		else
		{
			size = _putchar(format[i]);
		}
		i = i + 1;
		num_of_chars = num_of_chars + size;
	}

	va_end(ap);
	return (num_of_chars);
}
