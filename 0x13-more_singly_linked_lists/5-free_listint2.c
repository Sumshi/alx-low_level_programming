#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list and sets the head to NULL
 * @head: pointer to pointer to the head of the list
 * Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;/*keeps track of nodes we want to free*/

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;/*points to the next node*/
		free(current_node);
	}
	*head = NULL;/*end of list has been reached*/
}
