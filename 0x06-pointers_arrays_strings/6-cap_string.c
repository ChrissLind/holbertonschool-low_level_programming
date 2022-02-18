#include "main.h"

/**
 * *cap_string - Function that capitalizes all words of a string.
 *
 * @a: String.
 *
 * Return: 0
 */

char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if ((a[i - 1] >= 0 && a[i - 1] <= 47) || (a[i - 1] >= 58 && a[i - 1] <= 63))
			{
				if (!(a[i - 1] == 45))
				{
					a[i] = a[i] - 32;
				}
			}
			else if (a[i - 1] == 123 || a[i - 1] == 125)
			{
				a[i] = a[i] - 32;
			}
		}
	}
		return (a);
}
