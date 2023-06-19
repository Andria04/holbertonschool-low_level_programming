#include <stdio.h>
#include <stdlib.h>

/**
 * main - print all single digit numbers of base 10
 * Return: void
 */

int main(void)
{
	char number = '0';

	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');

	return (0);
}
