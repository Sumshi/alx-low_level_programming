#include "lists.h"
/**
 * free_listint - frees list
 * @head: pointer to  the head of the list
 * Return: Always 0
 */
void free_listint(listint_t *head)
{

	listint_t *current_node;/*keeps track of current node being freed*/

	while (head != NULL)/*loops runs till end of list*/
	{
		current_node = head;
		head = head->next;/*moves the head to next node*/
		free(current_node);/*frees memory allocated for current node*/
	}
}
