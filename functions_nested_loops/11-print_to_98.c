#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_to_98 - prints all natural numbers
 * @n: the number
 * Return: the number
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
