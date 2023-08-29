#include "lists.h"
/**
 * pop_listint - removes the head node
 * @head : head of the  list
 * Return: head node's data (n)
 * othwerise 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	int hnode;
	listint_t *h;
	listint_t *curr;

	if (*head == NULL)
		return (0);

	curr = *head;

	hnode = curr->n;

	h = curr->next;

	free(curr);

	*head = h;

	return (hnode);
}
