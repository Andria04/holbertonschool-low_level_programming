#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * swap_int - swaps the value of two integers
 * @a: the first int
 * @b: the second int
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
