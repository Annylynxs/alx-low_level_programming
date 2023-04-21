#include <stdio.h>

/**
 * main - prints the sizes of various data types
 * Return: (0)
 */
int main(void)
{
	int c;
	int i;
	int l;
	int d;
	int f;

	c = sizeof(char);
	i = sizeof(int);
	l = sizeof(long);
	d = sizeof(long long);
	f = sizeof(float);
	printf("Size of a char: %c byte(s)", c);
	printf("Size of an int: %d byte(s)", i);
	printf("Size of a long int: %ld byte(s)", l);
	printf("Size of a long long int: %lld byte(s)", d);
	printf("Size of a float: %f byte(s)", f);
	return (0);
}
