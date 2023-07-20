#include "main.h"

/**
 * print_square - print a square
 * @size: size of square
 * Description: Can only use _putchar to print. Use '#' to print square.
 */

void print_square(int size)
	{
	int vert, horiz;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (vert = size ; vert > 0 ; vert--)
	{
		for (horiz = size ; horiz > 0 ; horiz--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
