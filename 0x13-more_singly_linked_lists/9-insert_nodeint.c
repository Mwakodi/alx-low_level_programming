#include "lists.h"

/**
 * insert_nodeint - inserts a new node at a given position.
 * @idx:  index where the new node is added
 * @head: pointer to the first node in the list
 * n: data to insert in node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *current, *prev, *new_node;

if (head == NULL)
return (NULL);


new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);

new_node->n = n;

current = *head;
prev = NULL;
for (i = 0; i < idx && current != NULL; i++)
prev = current;
current = current->next;


if (i != idx)
free(new_node);
return (NULL);


if (prev == NULL)
*head = new_node;
else
prev->next = new_node;

new_node->next = current;

return (new_node);
}

