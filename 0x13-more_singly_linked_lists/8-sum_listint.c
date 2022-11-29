#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - he sum of all the data (n) of a listint_t
 * @head: head of list
 * Return: the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (head)
{
while (head)
{
sum += head->n;
head = head->next;
}
}
return (sum);
}
