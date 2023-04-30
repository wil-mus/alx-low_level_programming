#include "lists.h"

/**
 * add_nodeint_end - add node at the end of a list
 *
 * @head: pointer to first node
 * @n: data to insert to new node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *n_node;
	listint_t *curr = *head;

	n_node = malloc(sizeof(listint_t));

	if (n_node == NULL)
		return (NULL);

	n_node->n = n;
	n_node->next = NULL;

	if (*head == NULL)
	{
		*head = n_node;
		return (n_node);
	}
	while (curr->next != NULL)
	{
		curr = curr->next;
	}
	curr->next = n_node;

	return (n_node);

}
