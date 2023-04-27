#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to  the head of the list
 * Return: Always 0
 */
void free_list(list_t *head)
{
	list_t *current = head;
	list_t *next;/*stores the next node of the list*/

	while (current != NULL)
	{/*frees the memory allocated starting from head to tail*/
		next = current->next; /* store the next node */
		free(current->str); /* free the string in the current node */
		free(current); /* free the current node */
		current = next; /* move to the next node */
	}
}
