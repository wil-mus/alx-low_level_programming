#include "lists.h"

/**
 * listint_len - function to return no of elements in linked list
 *
 * @h: linked list to traverse
 *
 * Return: no of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t n = 0;

	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
