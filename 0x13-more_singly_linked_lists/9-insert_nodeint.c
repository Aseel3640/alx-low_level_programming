#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of list
 * @idx:index
 * @n: value for a new node
 * Return:the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new;
listint_t *a = *head;
unsigned int i;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
for (i = 0; a; ++i)
{
if (i == idx - 1)
{
new->next = a->next;
a->next = new;
return (new);
}
a = a->next;
}
free(new);
return (NULL);
}
