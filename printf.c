#include "main.h"
/**
 * _printf - Produces output according to functions
 * @format: pointer to char in string passed
 * Return: Number of characters it printed
 */
int _printf(const char *format, ...)
{
	va_list ap;
	int i, num_of_chars, size;

	va_start(ap, format);

	i = 0;
	num_of_chars = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '\0')
			{
				size = print_specifier(&(format[i + 1]), ap);
				if (size > 0)
				{
					num_of_chars = num_of_chars + size;
				}
				else
				{
					putchar('%');
					putchar(format[i + 1]);
					num_of_chars = num_of_chars + 2;
				}
				i = i + 1;
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
