#include <stdio.h>
/**
 * main - printing of single digit numbers
 * Return: (0)
 */
int main(void)
{
	int n;

	n = 0;
	while (n <= 9)
	{
		purchar(n + '0');
		n++;
	}
	purchar('\n');
	return (0);
}
