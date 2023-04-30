#include "lists.h"

/**
 * insert_nodeint_at_index - function to insert new node at given position
 *
 * @head: pointe to first node
 * @idx: new node index
 * @n: data to insert new node
 *
 * Return: pointer to new node else NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *n_node;
	unsigned int a = 0;
	listint_t *curr = *head;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (idx == 0)
	{
		n_node->next = *head;
		*head = n_node;
		return (n_node);
	}
	while (curr != NULL && a < idx - 1)
	{
		curr = curr->next;
		a++;
	}
	if (a < idx - 1 || curr == NULL)
	{
		free(n_node);
		return (NULL);
	}
	n_node->next = curr->next;
	curr->next = n_node;

	return (n_node);
}
