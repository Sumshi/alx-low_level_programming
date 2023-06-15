#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: is the index of the node, starting at 0
 * Return: the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;/*keeps track of current index*/

	while (head != NULL)
	{
		if (count == index)/*checks if count is egual to desired ind*/
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);/*node not found*/
}
