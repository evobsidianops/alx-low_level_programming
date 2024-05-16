#include "lists.h"

/**
 * free_listint - free the memory allocated to list_int
 * @head: pointer to struct
 */
void free_listint(listint_t *head)
{
	listint_t *mem;

	while (head != NULL)
	{
		mem = head;
		head = head->next;
		free(mem);
	}
}
