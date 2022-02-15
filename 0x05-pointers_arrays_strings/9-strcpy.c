#include "main.h"

/**
 * *_strcpy - Function that prints a string and copys it.
 * @src: String being printed.
 * @dest: Destination where string is being printed.
 *
 * Return: 0
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; i >= '\0'; i++)
	{
		dest[i] = src[i];
			if (src[i] == '\0')
				return (dest);
	}
	return (dest);
}
