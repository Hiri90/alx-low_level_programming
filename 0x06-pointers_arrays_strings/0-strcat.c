#include "main.h"
/**
 * _strcat - concatenates two srings
 * @dest: Character to be concatenated
 * @src: character string
 *
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)

		;

	for (b = 0; src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;

	}

	dest[a] = '\0';
	return (dest);
}
