#include "main.h"

/**
 * print_alphabet_x10 - Learning about nested loop
 * Return: (0)
 */
void print_alphabet_x10(void)
{
	int n;
	char a;

	n = 0;
	a = 97;
	while (n < 10)
	{
		while (a < 123)
		{
			_putchar(a);
			a++;
		}
		a = 97;
		_putchar('\n');
		n++;
	}
}

