#include "lists.h"
/**
 * free_listint_safe -  frees a listint_t list.
 * @h: pointer to the start of the linked list
 * Return: the size of the list that was free’d
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;/*keeps track of size of list*/
	listint_t *temp;/*temporary pointer to next node*/

	if (h == NULL)/*list is empt*/
		return (count);/*which is 0*/

	while (*h != NULL)
	{
		count++;
		if (*h <= (*h)->next)/*if self loop*/
		{
			free(*h);
			break;/*to prevent infinite loop*/
		}
	/*not self loop*/
		temp = (*h)->next;
		free(*h);
		*h = temp;
	}

	*h = NULL;/*sets head of list to null*/
	return (count);
}
