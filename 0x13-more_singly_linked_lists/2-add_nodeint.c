#include "lists.h"

/**
 * listint_len - counts the number of elements in
 * a linked list.
 * @h: head of a list.
 *
 * Return: numbers of nodes.
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *indicator *h;
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		indicator = indicator->next;
	}
	return (count);
}
