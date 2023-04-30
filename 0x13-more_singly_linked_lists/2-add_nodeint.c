#include "lists.h"

/**
 * add_nodeint - add node at the start of linked list
 *
 * @head: pointer to first node
 * @n: data inserted to new node
 *
 * Return: pointer to new node else NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *a;

	a = malloc(sizeof(listint_t));
	if (a == NULL)
	{
		return (NULL);
	}
	a->n = n;
	a->next = *head;
	*head = a;

	return (a);
}
