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
	num_of_chars = strlen(format);
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
			{
				write(1, format, strlen(format));
			}
		}
		else
		{
			write(1, &format[i], 1);
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

	h = 'h';
	i = '%';
	_printf("This is a char\n");
	printf("This is a char\n");
}
