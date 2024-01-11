#include "lists.h"

/**
 * free_dlistint - frees a dlistint_t list.
 * @head: pointers to head of the lists
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
