#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - frees a listint_t list
 * @head: pointer to the head of the list
 *
 * Return: the size of the list that was free'd
 */
size_t free_listint_safe(listint_t **head)
{
listint_t *slow = *head, *fast = *head, *temp;
size_t count = 0;

while (slow && fast && fast->next)
{
slow = slow->next;
fast = fast->next->next;

if (slow == fast)
{
*head = NULL;
while (slow != NULL)
{
count++;
temp = slow;
slow = slow->next;
free(temp);
}
exit(98);
}

temp = slow;
slow = slow->next;
free(temp);
count++;
}

if (slow)
{
temp = slow;
slow = slow->next;
free(temp);
count++;
}
*head = NULL;
return (count);
}

