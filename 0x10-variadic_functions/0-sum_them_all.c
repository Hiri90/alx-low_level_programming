#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of passed unsigned integer parameters
 * @n: integer parameter to be passed
 * Return: Always 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_list;
	unsigned int count;
	int sum;

	if (n == 0)
		return (0);

	sum = 0;

	va_start(my_list, n);

	for (count = 0; count < n; count++)
		sum += va_arg(my_list, int);
	va_end(my_list);

	return (sum);
}
