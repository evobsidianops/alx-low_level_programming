#include "lists.h"

/**
 * sum_listint - Sums all elememt in the list
 * @head: pointer to the elements
 *
 * Return: returns the sum of all data elememts
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *mem;

	sum = 0;
	while (head != NULL)
	{
		mem = head;
		sum += mem->n;
		head = head->next;
	}
	return (sum);
}
