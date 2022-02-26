#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that adds two numbers.
 * @argc: Count of arguments
 * @argv: Array of pointers passed to strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum = 0, a, b, x;

	for (a = 1; a < argc; a++)
	{
		for (b = 0; argv[a][b] != '\0'; b++)
		{
			if (argv[a][b] < '0' || argv[a][b] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		x = atoi(argv[a]);
		sum += x;
	}
	printf("%d\n", sum);
	return (0);
}
