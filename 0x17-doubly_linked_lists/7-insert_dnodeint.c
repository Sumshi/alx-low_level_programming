#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a list
 * @head: pointer to pointer to the first node of the list
 * @idx: index of the position where the new node should be added
 * @n: value to be stored in the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node;/*new node to be inserted*/
	dlistint_t *current_node;/*for traversing*/
	dlistint_t *prev;
	unsigned int i;/*for looping*/

	if (h == NULL)
	{
		return (NULL);/*indicates insertion failed*/
	}
	/*inserting node at index 0, beginning of a list*/
	if (idx == 0)
	{
		return (add_dnodeint(h, n));/*adds node at the beginning*/
	}
	/*if idx is not 0, traverse the list*/
	current_node = *h;
	prev = NULL;
	for (i = 0; current_node != NULL && i < idx; i++)
	{
		prev = current_node;
		current_node = current_node->next;
	}
	if (i < idx)/*loop terminates b4 reaching given index*/
		return (NULL);
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = current_node;
	prev->next = new_node;
	return (new_node);
}
