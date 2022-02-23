#include "main.h"

/**
 * _strstr - Function that locates a substring.
 *
 * @haystack:
 * @needle:
 *
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	int index, bruh, point = 0;

	for (index = 0; haystack[index]; index++)
	{
		if (haystack[index] == needle [0])
		{
			for (bruh = 0; needle[bruh]; bruh++)
			{
				if (haystack[index + bruh] == needle[bruh])
					point = 1;
				else
					point = 0;
			}
		}
		if (point == 1)
			return (haystack + index);
	}
	if (*needle == '\0')
		return (haystack);
	else
		return (0);
}
