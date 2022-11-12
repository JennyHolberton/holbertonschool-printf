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
 * print_char - prints a char
 * @ap: list of arguments to be printed
 * Return: number of characters printed, 1
 */
int print_char(va_list ap)
{
	_putchar(va_arg(ap, int));
	return (1);
}

/**
 * print_str - prints a string
 * @ap: string to printed
 * Return: number of chars in string printed
 */
int print_str(va_list ap)
{
	int i;
	char *string;

	i = 0;
	string = va_arg(ap, char*);
	if (string == NULL)
	{
		string = "(null)";
	}
	while (string[i] != '\0')
	{
		_putchar(string[i]);
		i = i + 1;
	}
	return (i);
}
