#include "lists.h"

/**
 * pop_listint - function to delete the head node
 *
 * @head: pointer to first node
 *
 * Return: 0 if linked list is empty else head node data
 */

int pop_listint(listint_t **head)
{
	listint_t *tem;
	int a;

	if (!head || !*head)
	{
		return (0);
	}
	a = (*head)->n;
	tem = (*head)->next;
	free(*head);
	*head = tem;

	return (a);

}
