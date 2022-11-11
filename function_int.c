#include "main.h"

/**
 * print_int - prints a number
 * @ap: number to be printed
 * Return: pointer to function _print_int
 */

int print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	return (_print_int(num));
}

/**
 * _print_int - prints a number using recursion
 * @num: number to be printed
 * Return: length of number
 */

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
