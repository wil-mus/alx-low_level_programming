#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function to free a linked list
 *
 * @head: list to be freed
 *
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
