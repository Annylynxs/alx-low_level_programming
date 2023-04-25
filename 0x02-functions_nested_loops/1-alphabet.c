#include "main.h"
/**
 *print_alphabet - prints all the lower case alphabets
 *Return: (0)
 */
void print_alphabet(void)
{
	char a;

	a = 97;
	while (a < 123)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

