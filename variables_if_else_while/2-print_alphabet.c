#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the alphabet in lowercase
 * Return: void
 */
int main(void)
{
	char i = 'a';

	while (i <= 'z')
	{
		putchar(i);
		i++;
	}
	putchar('\n');

	return (0);
}
