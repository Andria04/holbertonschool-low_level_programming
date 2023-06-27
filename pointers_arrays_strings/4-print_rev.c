#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_rev - prints a string in reverse
 * @s: the string to reverse
 * Return: the string reversed
 */

void print_rev(char *s)
{
	int len = 0, index = 0;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		putchar(s[index]);

	putchar('\n');
}
