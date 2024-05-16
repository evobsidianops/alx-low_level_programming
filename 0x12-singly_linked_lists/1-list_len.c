#include "lists.h"

/**
 * list_len - The length of the nodes
 * @h: pointer to the first node
 *
 * Return: returns the length of the linked list
 */
size_t list_len(const list_t *h)
{
	int len;

	len = 0;
	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len);
}
