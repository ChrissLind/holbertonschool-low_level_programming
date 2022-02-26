#include <stdio.h>

/**
 * main - Prints the arguments it has recieved.
 * @argc: Count of arguments
 * @argv: Array of pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
