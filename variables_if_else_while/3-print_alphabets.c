#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the alphabet in lowercase and uppercase
 * Return: void
 */

int main(void)
{
	int lettera = 'a';
	int letterb = 'A';

	while (lettera <= 'z')
	{
		putchar(lettera);
		lettera++;
	}
	while (letterb <= 'Z')
	{
		putchar(letterb);
		letterb++;
	}
	putchar('\n');
	return (0);
}
