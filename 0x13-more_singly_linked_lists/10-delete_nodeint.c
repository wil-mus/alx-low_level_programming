#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a specific index
 *
 * @head: pointer tothe node head
 * @index: node to be deleted
 *
 * Return: 1 if success else -1 if it fails
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int a;
	listint_t *curr, *prev = NULL;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		curr = *head;
		*head = (*head)->next;
		free(curr);
		return (1);
	}
	curr = *head;

	for (a = 0; a < index && curr != NULL; a++)
	{
		prev = curr;
		curr = curr->next;
	}
	if (curr == NULL)
		return (-1);

	prev->next = curr->next;
	free(curr);

	return (1);
}
