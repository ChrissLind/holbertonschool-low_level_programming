#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies 2 numbers.
 * @argc: Count of arguments
 * @argv: Array of pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
