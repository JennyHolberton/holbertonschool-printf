#include <string.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>
#include "main.h"

int _printf(const char *format, ...)
{
	va_list ap;
	int i;

	va_start (ap, format);
	i = 0;

	if (format == NULL)
	{
		return (-1);
	}
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] != '%')
			{
				if (format[i + 1] == 'c')
				{
					write(1, format, strlen(format));
				}
			}
			if (format[i + 1] != '\0')
			{
				i = i + 1;
			}
			wrote(1, &format[i], 1);
		}
		i = i + 1;
	}
	va_end(ap);
	return (0);
}

void main()
{
	char c;
	c = 'a';
	_printf("This is a string %c\n", c);
	printf("This is a string %c\n", c);
}
