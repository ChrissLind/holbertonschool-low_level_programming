#include "main.h"

/**
 * *_strncat - Function that concatenates two strings.
 * @src: Source.
 * @dest: Destination.
 * @n: bytes.
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; k < n && src[k] != '\0'; k++)
	{
		dest[k + i] = src[k];
	}
	return (dest);
}
