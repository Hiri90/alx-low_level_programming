#include <stdio.h>

/**
 * main - Entry point
 * Description : prints the alphabet in lowercase,
 * except q and e
 * Return: Aways 0 (Sucess)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}

	putchar('\n');
	return (0);
}
