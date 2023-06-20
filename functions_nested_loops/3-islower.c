#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _islower - check for lowercase character
 * @c: the character
 * Return: 1 if lowercase, 0 o/w
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
