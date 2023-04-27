#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - add new node at the begining of linked list
 *
 * @head: pointer to the list
 * @str: string to add to the node
 *
 * Return: address of new element else NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
