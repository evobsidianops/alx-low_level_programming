#include "lists.h"

/**
 * listint_len - length of list element
 * @h: pointer to the head node
 *
 * Return: returns the length of the lists
 */
size_t listint_len(const listint_t *h)
{
	int j;

	j = 0;
	while (h != NULL)
	{
		h = h->next;
		j++;
	}
	return (j);
}
