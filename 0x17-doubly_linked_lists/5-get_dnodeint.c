#include "lists.h"
/**
 * get_dnodeint_at_index - gets the nth node of a dlistint_t linked list
 * @head: pointer to the first node
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;/*keeps track of current index*/
	dlistint_t *tmp = head;

	while (tmp != NULL)
	{
		if (count == index)/*checks if count is egual to desired ind*/
			return (tmp);
		count++;
		tmp = tmp->next;
	}
	return (NULL);/*node not found*/
}
