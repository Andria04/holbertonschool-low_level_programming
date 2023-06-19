#include <stdio.h>
#include <stdlib.h>

/**
 * main - printf the alphabet in reverse
 * Return: void
 */

int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');
	return (0);
}
