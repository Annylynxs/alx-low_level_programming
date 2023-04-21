#include <stdio.h>
/**
 * main - printing all possible combinations
 * Return: (0)
 */
int main(void)
{
	int n;
	int p;

	n = 0;
	p = 0;
	while (n < 10)
	{
		while (p < 10)
		{
			putchar(n + '0');
			putchar(p + '0');
			putchar(',');
			p++;
		}
		p = 0;
		n++;
	}
	putchar('\n');
	return (0);
}
