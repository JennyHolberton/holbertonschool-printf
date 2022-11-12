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
	if (num < 0 && num != INT_MIN)
	{
		return (print_neg(num));
	}
	if (num == INT_MIN)
	{
		_putchar('-');
		return (_print_int(num) + 1);
	}
	return (_print_int(num));
}

/**
 * _print_int - prints a number using recursion
 * @num: number(s) to be printed
 * Return: number of integers printed
 */
int _print_int(unsigned int num)
{
	int i;

	i = 0;
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
	_putchar((num % 10) + '0');
	i = i + 1;
	return (i);
}
/**
 * print_neg - prints negative numbers
 * @num: negative number to be printed
 * Return: number of integers printed
 */
int print_neg(int num)
{
	int i;

	i = 0;
	if (num < 0)
	{
		_putchar('-');
		num = num * -1;
		i = i + 1;
	}
	if (num / 10 != 0)
	{
		i = i + _print_int(num / 10);
	}
	_putchar(num % 10 + '0');
	i = i + 1;
	return (i);
}
