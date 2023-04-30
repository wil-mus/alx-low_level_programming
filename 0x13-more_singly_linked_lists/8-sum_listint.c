#include "lists.h"

/**
 * sum_listint - function returning sum of all data
 *
 * @head: first node
 *
 * Return: sum else 0 if list is empty
 */

int sum_listint(listint_t *head)
{
	listint_t *curr = head;
	int sum = 0;

	while (curr != NULL)
	{
		sum += curr->n;
		curr = curr->next;
	}
	return (sum);
}
