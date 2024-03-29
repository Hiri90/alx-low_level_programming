#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: string to be concatenated to
 * @src: char string
 * @n: number of characters to concatenate in
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	for (i = 0; dest[i] = '\0'; i++)
		;
	for (j = 0; src[j] = '\0' && n > 0; j++, n--, i++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
