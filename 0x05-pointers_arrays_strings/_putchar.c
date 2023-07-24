#include <unistd.h>

/**
 * _putchar - writes a character to the stdout
 * @c: The character set to print
 *
 * Return: On success 1.
 * On error, -1 is returned and errno is set appropraitely
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
