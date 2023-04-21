#include <stdio.h>
/**
 * main - printing lower case in reverse
 * Return: (0)
 */
int main(void)
{
	char n;

	n = 122;
	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
