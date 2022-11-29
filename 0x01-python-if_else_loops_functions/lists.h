#ifndef LISTS_H
#define LISTS_H

#include <stdef.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure for task
 */

typdef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

size_t print-listint(const listint_t *h);
listint_t *add_nodeint_end(listint_t **head, const int n);
void free_listint(listint_t *head);

listint_t 8insert-node(listint_t **head, int number);

#endif /* LISTS_H */
