#include "main.h"

/**
 * _islower - function that checks lowercase characters
 * @c: input1
 * Return: (0)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

