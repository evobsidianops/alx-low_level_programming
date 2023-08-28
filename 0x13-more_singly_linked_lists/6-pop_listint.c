#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to pointer address
 *
 * Return: returns the head node data
 */
int pop_listint(listint_t **head)
{
	int ol;
	listint_t *mem;

	if (*head == NULL)
		return (0);;

	ol = (*head)->n;

	mem = *head;
	*head = (*head)->next;

	free(mem);
	return (ol);
}
