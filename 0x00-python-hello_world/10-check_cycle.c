#include "lists.h"
/**
 * check_cycle - cycle tortoise and hare
 * @list: pointer to head
 * Return: 1 on success, 0 otherwise.
 */

int check_cycle(listint_t *list)
{
	listint_t *tortoise = list;
	listint_t *hare = list;

	if (list == NULL)
		return (0);
	while (tortoise && tortoise->next)
	{
		hare = hare->next;
		tortoise = tortoise->next->next;
		if (hare == tortoise)
		{
			return (1);
		}
	}
	return (0);
}
