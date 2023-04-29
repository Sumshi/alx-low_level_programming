#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given position in a list
 * @head: pointer to pointer to the first node of the list
 * @idx: index of the position where the new node should be added
 * @n: value to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;/*pointer to the new node*/
	listint_t *previous;/*node before the new node*/
	listint_t *current;/*pointer at the given index*/
	unsigned int i;/*for looping*/

	if (head == NULL)/*indicates insertion failed*/
		return (NULL);

	if (idx == 0)/*new node is created*/
	{
		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	previous = NULL;
	current = *head;
	for (i = 0; current != NULL && i < idx; i++)
	{
		previous = current;
		current = current->next;
	}

	if (i < idx)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current;
	previous->next = new_node;
	return (new_node);
}
