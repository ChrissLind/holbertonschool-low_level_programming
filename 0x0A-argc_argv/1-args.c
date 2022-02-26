#include <stdio.h>
/**
 * main - Prints the number of arguments passed.
 * @argc: Count of arguments
 * @argv: Array of pointers to strings
 * Return: 0
 */

int main(int argc, char *argv[]__attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
