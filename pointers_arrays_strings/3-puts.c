#include "main.h"

/**
 * _puts - prints a string to stdout
 * @str: the string to be printed
 */
void _puts(char *str)
{
	while (*str)
		putchar(*str++);

	putchar('\n');
}
