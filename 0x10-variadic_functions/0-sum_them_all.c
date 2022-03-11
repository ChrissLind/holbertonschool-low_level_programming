#include "variadic_function.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all parameters.
 * @n: The number of parameters passed.
 * @...: A variable number of parameters to get the sum.
 *
 * Return: If n == 0 - 0.
 * 	Otherwise - the sum of all parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int index, sum = 0;

	va_start(nums, n);

	for (index = 0; index < n; index++)
		sum += va_arg(nums, int);

	va_end(nums);

	return (sum);
}

