#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int _printf(const char *format, ...)
{
	va_list ap;
	int i;
	int num_of_chars;
	char *str;
	int n;

    	va_start (ap, format);

	i = 0;
	num_of_chars = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'd')
			{
				n = va_arg(ap, int);
				write(1, &n, 4);
				i = i + 1;
				num_of_chars = num_of_chars + 1;
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

void main()
{
	char h;
	int i;
	char *string;
	int len, len1;
	int x;

	string = "Hello";
	i = '%';
	x = 1234;
	_printf("This is a == %d\n", x);
	printf("This is a == %d\n", x);
	printf("_printf = %d, printf = %d\n", len, len1);
}
