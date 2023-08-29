#include "lists.h"

/**
 * get_nodeint_at_index - Gets data at nth index
 * @head: pointer address
 * @index: index data
 *
 * Return: returns the node address
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *index_node;
	unsigned int count;

	count = 0;
	index_node = head;
	while (index_node != NULL)
	{
		if (count == index)
		{
			return (index_node);
		}
		count++;
		index_node = index_node->next;
	}
	return (index_node);
}
