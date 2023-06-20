#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isupper - checks for uppercase character
 * @c: the character
 * Return: 1 if uppercase, 0 o/w
 */

int _isupper(int c)
{
	char letter = 'A';

	while (letter <= 'Z')
	{
		if (c == letter)
		{
			return (1);
		}
		letter++;
	}
	return (0);
}
