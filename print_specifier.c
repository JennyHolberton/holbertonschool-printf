#include "main.h"
/**
 * print_specifier - finds correct func according to the specifier
 * @specifier: pointer to specifier char to be checked
 * @ap: pointer to the array of actual specifiers
 * Return: number of characters
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
	while (specifier != NULL && specifiers[i].ptr != NULL)
	{
		if (*(specifier) == '%')
		{
			putchar('%');
			return (1);
		}
		if (specifiers[i].ptr[0] == *(specifier))
		{
			return (specifiers[i].print(ap));
		}
		i = i + 1;
	}
	return (-1);
}
