#include "main.h"

/**
 * *_memcpy - Function that fills memory with a consistant byte.
 *
 * @dest: destination
 * @src: source
 * @n: bytes
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		dest[count] = src[count];

	return (dest);
}
