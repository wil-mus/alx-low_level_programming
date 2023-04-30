#include "lists.h"

/**
 * get_nodeint_at_index - function to return nth node in linked list
 *
 * @head: first node
 * @index: node index to return
 *
 * Return: pointer to the node index else NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *curr = head;

	while (curr != NULL && a < index)
	{
		curr = curr->next;
		a++;
	}
	if (a < index)
	{
		return (NULL);
	}
	return (curr);
}
