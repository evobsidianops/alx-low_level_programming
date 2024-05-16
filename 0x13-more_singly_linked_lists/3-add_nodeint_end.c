#include "lists.h"

/**
 * add_nodeint_end - add node to the end of list
 * @head: pointer to pointer of struct
 * @n: arguments to be added to the list
 *
 * Return: returns the address of the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nl;
	listint_t *ol;

	nl = malloc(sizeof(listint_t));

	if (nl == NULL)
		return (NULL);
	nl->n = n;

	ol = *head;
	if (ol == NULL)
		*head = nl;
	else
	{
		while (ol->next != NULL)
			ol = ol->next;
		ol->next = nl;
	}
	return (nl);
}
