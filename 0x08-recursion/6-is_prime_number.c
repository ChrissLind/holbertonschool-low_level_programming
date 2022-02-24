#include "main.h"

/**
 *
 *
 *
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
