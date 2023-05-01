#include "lists.h"

/**
 * find_listint_loop - function that finds loop in linked list
 *
 * @head: pointer to first node
 *
 * Return: address of node where loop start, else NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *sec, *fas;

	fas = head;
	sec = head;

	if (head == NULL)
		return (NULL);
	while (sec && fas && fas->next)
	{
		sec = sec->next;
		fas = fas->next->next;

		if (sec == fas)
		{
			sec = head;
			while (sec != fas)
			{
				sec = sec->next;
				fas = fas->next;
			}
			return (sec);
		}
	}
	return (NULL);
}
