#include <stdio.h>
/**
 * main - printing all possible combinations
 * Return: (0)
 */
int main(void)
{
	int n;

	n = 0;
	while (n < 10)
	{
		putchar(n + '0');
		if (n != 9)
		{
			putchar(',');
		}
		putchar(' ');
		putchar('\n');
		n++;
	}
	return (0);
}
