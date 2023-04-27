#inlude "lists.h"
#include <stdio.h>

/**
 * print_list - function to print all elements in linked list
 *
 * @list_t:list
 * @h: pointer to list to print
 *
 * Return: If str is NULL, print [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
