#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isdigit - checks for a digit
 * @c: the character
 * Return: 1 if digit, 0 o/w
 */

int _isdigit(int c)
{
	char digit = '0';

	while (digit <= '9')
	{
		if (c == digit)
		{
			return (1);
		}
		digit++;
	}
	return (0);
}
