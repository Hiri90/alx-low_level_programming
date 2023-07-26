#include "main.h"
/**
 * reverse_array - reverses array of integers
 * @a: array of integers
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int g;
	int h;

	for (g = 0; g < (n / 2); g++)
	{
		h = a[g];
		a[g] = a[n - g - 1];
		a[n - g - 1] = h;

	}

}
