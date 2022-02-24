#include "main.h"

/**
 * is_prime_number - Function that returns 1 if the number is a prime number.
 *
 * @n: Number
 *
 */

int is_prime_number(int n)
{
	if (n < 0)
		return (0);
	if ((n % 2 != 0) && (n / 3 != 0) && (n % 5 != 0))
		return (1);
	else
		return (0);
}
