#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * puts2 - prints every other char
 * @str: the string entirely
 * Return: the string
 */

void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);

	putchar('\n');
}
