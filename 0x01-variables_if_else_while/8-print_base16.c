#include <stdio.h>

/**
 * main - Entry point
 * Description: Print all numbers of base64 in lowercase.
 * Using putchar 3 times only.
 * Return: 0
 */

int main(void)
{
	int x;
	char c;

	for (x = 48; x < 58; x++)
	{
		putchar(x);
	}

	for (c = 'a'; c < 'g'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
