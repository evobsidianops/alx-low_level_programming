#include "lists.h"

/**
 * print_list - prints list
 * @h: pointer to the first node
 *
 * Return: returns a node
 */
size_t print_list(const list_t *h)
{
	size_t j;

	j = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[%d] (nil)\n", h->len);
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
		j++;
	}
	return (j);
}
