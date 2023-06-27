#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts_half - prints half of a string
 * @str: the string
 * Return: the string
 */

void puts_half(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);

	putchar('\n');
}
