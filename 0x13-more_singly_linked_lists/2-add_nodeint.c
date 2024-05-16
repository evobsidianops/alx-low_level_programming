#include "lists.h"

/**
 * add_nodeint - add elements to the beginning of the node
 * @head: pointer to pointer struct
 * @n: integer value to be added
 *
 * Return: returns address of the new node;
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nl;

	nl = malloc(sizeof(listint_t));
	if (nl == NULL)
		return (NULL);
	nl->n = n;
	nl->next = *head;
	*head = nl;
	return (nl);
}
