#include "lists.h"

/**
 * free_listint2 - deallocates space and set head to NULL
 * @head: pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *mem;

	if (*head == NULL)
		return;
	while (*head != NULL)
	{
		mem = (*head)->next;
		free(*head);
		*head = mem;
	}
	*head = NULL;
}
