#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints base 16
 * Return: void
 */

int main(void)
{
	char number = '0';
	char letter = 'a';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
