#include "main.h"

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

/**
 * print_char: prints a char
 * @ap: char to be printed
 * Return: number of chars, 1
 */
int print_char(va_list ap)
{
    	_putchar(va_arg(ap, int));
	return (1);
}
/**
 * print_str - prints a string
 * @ap: string to printed
 * Return: number of chars in string
 */
int print_str(va_list ap)
{
	int i;
	char *str;

	i = 0;
	str = va_arg(ap, char*);
	if (str == NULL)
	{
		return (-1);
	}
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 1;
	}
	return (i);
}
/**
 * print_percent - prints a percentage sign
 * Return: number of chars, 1
 */
int print_percent(__attribute__((unused)) va_list ap)
{
	_putchar('%');
	return (1);
}
