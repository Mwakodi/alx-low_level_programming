#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: first node in the linked list
 * @index: index the node to be returned
 *
 * Return: pointer to required node or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 0; i < index && current != NULL; i++)
		current = current->next;

	return (current);
}
