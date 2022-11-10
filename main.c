#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len1;
   len = _printf("Length:[%d, %i]\n", -22, -22);
    len1 = printf("Length:[%d, %i]\n", -22, -22);
 printf("_printf len = %d, printf len = %d\n", len, len1);

    len = _printf("Negative:[%d]\n", -762534);
    len1 = printf("Negative:[%d]\n", -762534);
  printf("_printf len = %d, printf len = %d\n", len, len1);
    len = _printf("Character:[%c]\n", 'H');
    len1 = printf("Character:[%c]\n", 'H');
    printf("_printf len = %d, printf len = %d\n", len, len1);
    len = _printf("String:[%s]\n", "I am a string !");
    len1 = printf("String:[%s]\n", "I am a string !");
     printf("_printf len = %d, printf len = %d\n", len, len1);


    len = _printf("Percent:[%%]\n");
    len1 = printf("Percent:[%%]\n");
     printf("_printf len = %d, printf len = %d\n", len, len1);
     len = _printf("Percent:[%%] char:[%c]\n", 'V');
     len1 = printf("Percent:[%%] char:[%c]\n", 'V');
     printf("_printf len = %d, printf len = %d\n", len, len1);


    len = _printf("Unknown:[%r]\n");
    len1 = printf("Unknown:[%r]\n");
     printf("_printf len = %d, printf len = %d\n", len, len1);

    return (0);
}
