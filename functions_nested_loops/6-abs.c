#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _abs - computes absolute value of an int
 * @num: the number
 * Return: Always 0
 */

int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
	return (0);
}
