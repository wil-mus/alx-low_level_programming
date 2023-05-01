#include "lists.h"

/**
 * print_listint_safe - prints linked list safely
 *
 * @head: pointer to node head in linked list
 *
 * Return: no of nodes
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t c = 0;
	const listint_t *fast = head, *slow = head;

	while (slow != NULL && fast != NULL && fast->next != NULL)
	{
		printf("[%p] %d\n", (void *)slow, slow->n);
		slow = slow->next;
		fast = fast->next->next;
		c++;

		if (slow == fast)
		{
			printf("[%p] %d\n", (void *)slow, slow->n);
			c++;
			break;
		}
	}

	if (slow == NULL || fast == NULL || fast->next == NULL)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			c++;
		}
	}
	return (c);
}
