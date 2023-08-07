#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars,
 * @size: size of the array to create
 * @c: char to initialize the array c
 *
 * Return: pointer to the array (Success), NULL (Error)
 */
char *create_array(unsigned int size, char c)
{
	char *d;
	unsigned int i;

	if (size == 0)
		return (NULL);

	d = malloc(sizeof(c) * size);

	if (d == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		d[i] = c;

	return (d);
}
