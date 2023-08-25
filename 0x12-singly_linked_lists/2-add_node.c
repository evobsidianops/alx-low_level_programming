#include "lists.h"

/**
 * add_node - insert node at the beginning
 * @head: pointer address of head node
 * @str: str to be duplicated
 *
 * Return: returns the address of newly created node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *nl;
	int len;

	nl = malloc(sizeof(list_t));
	if (nl == NULL)
	{
		return (NULL);
	}
	else
	{
		for (len = 0; str[len]; len++)
			;
		nl->str = strdup(str);
		nl->len = len;
		nl->next = *head;
		*head = nl;
	}
	return (nl);
}
