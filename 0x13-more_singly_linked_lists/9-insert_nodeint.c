#include "lists.h"

/**
 * insert_nodeint_at_index - Insert node at specific indexes
 * @head: pointer to pointer to mem address
 * @idx: index where node is to be added
 * @n: value data to be added
 *
 * Return: returns the address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp, *index_node, *norm;
	unsigned int count, i;

	count = 0;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	index_node = *head;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	norm = *head;
	for (i = 0; norm != NULL; i++)
		norm = norm->next;
	if (idx > i || index_node == NULL || index_node->next == NULL)
		return (NULL);
	while (index_node != NULL)
	{
		if (count == idx)
		{
			temp->next = new_node;
			new_node->next = index_node;
		}
		count++;
		temp = index_node;
		index_node = index_node->next;
	}
	return (new_node);
}
