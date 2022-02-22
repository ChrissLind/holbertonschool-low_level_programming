#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: initial segement
 * @accept: bytes origin
 *
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int bts = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				bts++;
				break;
			}

			else if (accept[i + 1] == '\0')
				return (bts);
		}
		s++;
	}
	return (bts);
}
