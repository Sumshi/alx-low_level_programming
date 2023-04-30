#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to the first node of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;/*no previous node*/
	listint_t *current_node = *head;
	listint_t *next_node = NULL;/*no next node*/

	while (current_node != NULL)/*traverses till current is null*/
	{
		next_node = current_node->next;/*stores the next node*/
		current_node->next = previous_node;/*reverses pointer of current node*/
		previous_node = current_node;
		current_node = next_node;
	}
	*head = previous_node;
	return (*head);
}
