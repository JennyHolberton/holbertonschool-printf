#include "main.h"
/**
 * print_specifier - finds correct func according to the specifier
 * @specifier: pointer to specifier char to be checked
 * @ap: pointer to the array of actual specifiers
 * Return: number of characters printed.
 * On error, return -1 if next char is '\0'
 */
int print_specifier(const char *specifier, va_list ap)
{
	int i = 0;

	specifier_t specifiers[] = {
		{"c", print_char},
		{"s", print_str},
		{"d", print_int},
		{"i", print_int},
		{NULL, NULL}
	};
	if (*specifier == '\0')
	{
		return (-1);
	}
	while (specifier != NULL && specifiers[i].ptr != NULL)
	{
		if (*(specifier) == '%')
		{
			_putchar('%');
			return (1);
		}
		if (specifiers[i].ptr[0] == *(specifier))
		{
			return (specifiers[i].print(ap));
		}
		i = i + 1;
	}
	_putchar('%');
	_putchar(*specifier);
	return (2);
}
