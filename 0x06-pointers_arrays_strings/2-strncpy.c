#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to be concatenated to
 * @src: string being concatenated
 * @n: number of times the to copy over
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; n > j; j++)
		dest[j] = '\0';
	return (dest);
}
