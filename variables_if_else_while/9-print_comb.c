#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all combinations of single digits
 * Return: void
 */

int main(void)
{
	int separator = ',';
	int  number = '0';

	while (number <= '9')
	{
		if (number != '0')
		{
			putchar((int)separator);
			putchar(' ');
		}
		putchar((int)number);
		number++;
	}
	putchar('\n');
	return (0);
}
