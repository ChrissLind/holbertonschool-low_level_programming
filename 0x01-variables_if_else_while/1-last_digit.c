#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - program that assigns a random number to the variable
 *
 * Return: 0
 */

int main(void)
{
	int n, lastdigit;


	srand(time(0));
	n = rand() - RAND_MAX / 2;

	lastdigit = n % 10;
	printf("Last digit of %d is", n);

	if (n > 5)
		printf(" %d and is greater than 5\n", lastdigit);
	else if (lastdigit == 0)
		printf(" %d and is 0\n", lastdigit);
	else
		printf(" %d and is less than 6 and not 0\n", lastdigit);

	return (0);
}
