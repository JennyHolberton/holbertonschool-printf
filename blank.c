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

    	va_start (ap, format);

	i = 0;
	num_of_chars = 0;
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				putchar(va_arg(ap, int));
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
	int i, len, len1;

	h = 'h';
	i = '%';
	len = _printf("This is a char\n");
	len1 = printf("This is a char\n");
	printf("_printf = %d, printf = %d\n", len, len1);
}
