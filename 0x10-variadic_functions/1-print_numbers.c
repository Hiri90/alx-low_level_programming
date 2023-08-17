#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - function that prints numbers passsedx as parameters
 * @separator: separator between numbers
 * @n: number of arguements
 * Return: no rerturn
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list my_list;
	unsigned count;
	
	va_start(my_list, n);

	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(my_list, unsigned int));
		if (count < (n - 1) && separator != NULL)
			printf("%s", separator);

	}
	va_end(my_list);
	printf("\n");

}
