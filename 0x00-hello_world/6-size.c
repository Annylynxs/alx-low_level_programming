#include <stdio.h>

/**
 * main - prints the sizes of various data types
 * Return: (0)
 */
int main(void)
{
	int a;
	int i;
	int l;
	int d;
	int b;

	a = sizeof(char);
	i = sizeof(int);
	l = sizeof(long);
	d = sizeof(long long);
	b = sizeof(float);
	printf("Size of a char: %d byte(s)\n", a);
	printf("Size of an int: %d byte(s)\n", i);
	printf("Size of a long int: %ld byte(s)\n", l);
	printf("Size of a long long int: %lld byte(s)\n", d);
	printf("Size of a float: %d byte(s)\n", b);
	return (0);
}
