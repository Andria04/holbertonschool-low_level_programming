#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int count = 0;

	while (count <= 10)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			putchar(letter);
			letter++;
		}
		count++;
		putchar('\n');
	}
}
