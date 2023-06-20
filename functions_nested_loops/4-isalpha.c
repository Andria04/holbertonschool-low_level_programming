#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _isalpha - chech for alphabet character
 * @c: the character
 * Return: 1 if lowercase, letter or uppercase, 0 o/w
 */

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
