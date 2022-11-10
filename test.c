#include "main.h"

int main()
{

	char character = 'a';
	int num1 = 5;
	int num2 = 1234;

	_printf("This is a char: %c\n", character);
	_printf("This is a string: %s\n", "Hello");
	_printf("This is a number: %d\n", num1);
	_printf("This is a number: %i\n", num2);

	printf("This is a char: %c\n", character);
	printf("This is a string: %s\n", "Hello");
	printf("This is a number: %d\n", num1);
	printf("This is a number: %i\n", num2);
	return (0);
}
