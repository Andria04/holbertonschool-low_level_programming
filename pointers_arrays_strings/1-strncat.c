#include "main.h"

/**
 * _strncat - concatenates two strings
 * @dest: the destination
 * @src: the appended to dest
 * @n: the times
 * Return: A pointer to the resuilting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
