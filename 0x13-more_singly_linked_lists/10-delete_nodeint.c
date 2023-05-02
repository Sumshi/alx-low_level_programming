#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position in list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *previous_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = current_node->next;
		free(current_node);
		return (1);
	}

	previous_node = NULL;
	current_node = *head;
	for (i = 0; current_node != NULL && i < index; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}

	if (current_node == NULL)
		return (-1);

	previous_node->next = current_node->next;
	free(current_node);
	return (1);
}
