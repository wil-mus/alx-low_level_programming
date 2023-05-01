#include "lists.h"

/**
 * free_listint_safe - function to free linked list
 *
 * @h: ppointer to the first node
 *
 * Return: freed lists size
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len;
	int d;
	listint_t *t;

	len = 0;
	if (!h || !*h)
	{
		return (0);
	}
	while (*h)
	{
		d = *h-(*h)->next;
		if (d > 0)
		{
			t = (*h)->next;
			free(*h);
			*h = t;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}
