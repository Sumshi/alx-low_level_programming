#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;/*for iterating*/
	dlistint_t *current_node = head;/*traverse list from head*/

	while (current_node != NULL)
	{
		if (count == index)
			return current_node;
		count++;
		current_node = current_node->next;
	}
	return (NULL);/*node not found*/
}
