#include "lists.h"

/**
 * print_listint - prints int values
 * @h: pointer to the head node
 *
 * Return: returns the number of node
 */
size_t print_listint(const listint_t *h)
{
	int j;

	j = 0;
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		j++;
	}
	return (j);
}
