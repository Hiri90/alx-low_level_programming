#include "main.h"
/**
 *  _strlen_recursion - prints length of a string
 *  @s: string length
 *  Return: an int, string length
 */
int _strlen_recursion(char *s)
{

	int c;

	if (*s == '\0')
		return (0);

	c = 1 +  _strlen_recursion(s + 1);

	return (c);
}
