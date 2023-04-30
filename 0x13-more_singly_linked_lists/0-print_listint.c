#include "lists.h"

/**
 * print_listint - function to print list of linked wlwmwnts
 *
 * @h: linked list
 *
 * Return: no of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *c = h;
	size_t a = 0;

	while (c != NULL)
	{
		printf("%d\n", c->h);
		c = c->next;
		a++;
	}
	return (a);
}
