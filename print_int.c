#include "main.h"

/**
 * print_int - prints a number
 * @ap: number(s) to printed
 * Return: function that prints a number
 */
int print_int(va_list ap)
{
	int num;

	num = va_arg(ap, int);
	if (num == INT_MIN)
	{
		_putchar('-');
		return (print_unsigned(num) + 1);
	}
	return (_print_int(num));
}

/**
 * _print_int - prints a number using recursion
 * @num: number(s) to be printed
 * Return: number of integers printed
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
		i = i + 1;
		return (i);
	}
	if (num / 10 != 0)
	{
		i = i + _print_int(num / 10);
	}
	_putchar(num % 10 + '0');
	i = i + 1;
	return (i);
}

/**
 * print_unsigned - prints unsigned int
 * @num: number(s) to be printed
 * Return: number of integers printed
 */

int print_unsigned(unsigned int num)
{
	int i;

	i = 0;
	if (num / 10 != 0)
	{
		i = i + print_unsigned(num / 10);
	}
	_putchar((num % 10) + '0');
	i = i + 1;
	return (i);
}
