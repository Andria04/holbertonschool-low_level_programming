#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - prints alphabet
 * Return: void
 */

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
}
