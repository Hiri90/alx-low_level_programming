#include "lists.h"
/**
 * pop_listint - removes the head node
 * @head : head of the  list
 * Return: head node's data (n)
 * othwerise 0 - if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int g;

	temp = *head;

	if (temp == NULL)
	return (0);

	*head = temp->next;
	g = temp->g;
	free(temp);
	return (g);
}
