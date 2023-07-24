#include "main.h"

/**
 * swap_int - does 'swap' on the values of a and b
 * @a: pointer 1
 * @b: pointer 2
 * Return; 0
 */

void swap_int(int *a, int *b)
{
	int cel;

	cel = *a;
	*a = *b;
	*b = cel;
}
