#include <stdio.h>
/**
 * main - printing lowercase
 * Return: (0)
 */
int main(void)
{
	char n;

	n = 97;
	while (n <= 122)
	{
		if (n != 113 && n != 101)
		{
			putchar(n);
		}
		n++;
	}
	putchar('\n');
	return (0);
}
