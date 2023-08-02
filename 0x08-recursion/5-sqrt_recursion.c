#include "main.h"

/**
 * _sqrt_recursion - return the natural square root of a number
 * @n: int number
 * Return: If no natural square root, return -1. Else return natural
 * square root
 */

int _sqrt_recursion(int n)
{
	int sqrt_done(int n, int s);

	int s = 1;

	return (sqrt_done(n, s));
}

/**
 * sqrt_done - helper function to solve _sqrt_recursion
 * @s: number to determine if square root
 * @n:  int number
 * Return: square root if natural square root, or -1 if none found
 */

int sqrt_done(int n, int s)
{
	if (n == s * s)
	{
		return (s);
	}
	else if (s < n)
	{
		return (sqrt_done(n, ++s));
	}
	else
	{
		return (-1);
	}
}
