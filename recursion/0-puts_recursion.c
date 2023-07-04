#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string
 * @s: the string
 * Return: the string with new line
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	putchar(*s);
	putchar('\n');

	_puts_recursion(s + 1);
}
