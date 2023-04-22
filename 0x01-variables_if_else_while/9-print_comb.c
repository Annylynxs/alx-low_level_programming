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
		if (n == 9)
		{
			putchar(n + '0');
		}
		else
		{
			putchar(n + '0');
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	return (0);
}
