#include "lists.h"

/**
 * free_listint2 - deallocates space and set head to NULL
 * @head: pointer to a pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *mem;
	char f[7] = "Freed!";
	int i;

	if (*head == NULL)
	{
		for (i = 0; i < 7; i++)
		{
			_putchar(f[i]);
		}
	}
	while (*head != NULL)
	{
		mem = (*head)->next;
		free(*head);
		*head = mem;
	}
	*head = NULL;
}
