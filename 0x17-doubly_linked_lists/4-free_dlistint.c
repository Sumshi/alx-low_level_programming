#include "lists.h"
/**
 * free_dlistint - frees list
 * @head: pointer to  the head of the list
 * Return: Always 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current_node;/*keeps track of current node being freed*/

	while (head != NULL)
	{
		current_node = head;
		head = head->next;/*moves the head to next node*/
		free(current_node);/*frees memory allocated for current node*/
	}
}
