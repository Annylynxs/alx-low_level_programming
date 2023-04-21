#include <stdio.h>
/**
 *main - printing lowercase and uppercase alphabeth
 *Return: (0)
 */
int main(void)
{
	char n;
	char p;

	n = 97;
	p = 65;
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (p <= 90)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
	return (0);
}
