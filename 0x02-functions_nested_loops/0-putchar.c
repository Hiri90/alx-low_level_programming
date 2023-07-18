#include "main.h"

/**
 * main - Entry point, Write a program that prints
 * _putchar,followed by a new line.
 *
 * Return: 0 always (succes)
 *
 */

int main(void)
{
	char *g = "_putchar\n";

		while (*g)
		{
			_putchar(*g);
			g++;

		}
	return (0);
}
