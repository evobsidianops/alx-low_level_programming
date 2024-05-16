#include "lists.h"

/**
 * delete_nodeint_at_index - Delete at specific node
 * @head: pointer to pointer address
 * @index: index node to be deleted
 *
 * Return: returns 1 or -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *del_node;
	listint_t *temp;
	listint_t *prev_node;
	unsigned int count;

	count = 0;
	del_node = *head;

	if (del_node == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(del_node);
		return (1);
	}
	while (del_node != NULL)
	{
		if (count == index)
		{
			temp = del_node;
			prev_node->next = del_node->next;

			if (prev_node->next != NULL)
			{
				free(temp);
				return (1);
			}
			return (-1);
		}
		count++;
		prev_node = del_node;
		del_node = del_node->next;
	}
	return (1);
}
