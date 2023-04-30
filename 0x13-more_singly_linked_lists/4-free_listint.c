#include "lists.h"

/**
 * free_listint - function to free linked list
 *
 * @head: list to b efreed
 *
 */

void free_listint(listint_t *head)
{
	listint_t *tem;

	while (head)
	{
		tem = head->next;
		free(head);
		head = tem;
	}
}
