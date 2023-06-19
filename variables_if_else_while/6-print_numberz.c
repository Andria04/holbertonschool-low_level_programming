#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all single digits of numbers base 10
 * Return: void
 */

int main(void)
{
	int number = 0;

	while (number <= 9)
	{
		putchar('0' + number);
		number++;
	}
	putchar('\n');
	return (0);
}
