#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet in lowercase except q and e
 * Return: void
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' && letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
	return (0);
}
