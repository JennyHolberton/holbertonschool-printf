print_char#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int print_char(va_list type)
{
    	_putchar(va_arg(ap, int));
	return (1);
}

int print_str(va_list type)
{
	int i;

	i = 0;
	while ((va_arg(ap, char)[i]) != '\0')
	{
		_putchar((va_arg(ap, char)[i]));
		i = i + 1;
	}
	return (i);
}

int print_percent(va_list type)
{
	_putchar('%');
	return (1);
}
