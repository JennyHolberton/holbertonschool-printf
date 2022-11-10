#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
/*int _putchar(char c)
{
	return (write(1, &c, 1));
}
*/
int print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	return (_print_int(num));
}

int _print_int(int num)
{
	int i;

	i = 0;
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		i = i + 1;
	}
	if (num == 0)
	{
		_putchar('0');
	}
	if (num / 10 != 0)
	{
		_print_int(num / 10);
	}
	_putchar(num % 10 + '0');
	i = i + 1;
	return (i);
}
