#include <stdio.h>
/**
 * main - printing all lower case alphabeth
 * Return: (0)
 */
int main(void)
{
	char n;

	n = 97;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
