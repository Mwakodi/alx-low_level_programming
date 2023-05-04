#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to frst node
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
const listint_t *ptr1 = head, *ptr2 = head;
size_t count = 0;

while (ptr1 && ptr2 && ptr2->next)
{
ptr1 = ptr1->next;
ptr2 = ptr2->next->next;

if (ptr1 == ptr2)
{
printf("-> [%p] %d\n", (void *) ptr1, ptr1->n);
exit(98);
}

printf("[%p] %d\n", (void *) ptr1, ptr1->n);
count++;
}

if (ptr1)
{
printf("[%p] %d\n", (void *) ptr1, ptr1->n);
count++;
}

return (count);
}
