#include <unistd.h>

/**
 * _putchar - writes the char to stdout
 * @c: the character to print
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}