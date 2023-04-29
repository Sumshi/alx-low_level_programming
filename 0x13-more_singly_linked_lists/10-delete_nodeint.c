#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at a given position in a linked list
 * @head: pointer to pointer to the first node of the list
 * @index: index of the node that should be deleted (starting from 0)
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current;
	listint_t *previous;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0) {
		current = *head;
		*head = current->next;
		free(current);
		return (1);
	}

	previous = NULL;
	current = *head;
	for (i = 0; current != NULL && i < index; i++) {
		previous = current;
		current = current->next;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
