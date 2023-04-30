#include "lists.h"
/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to pointer to the first node of the list
 * Return: pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL;/*no previous node*/
	listint_t *next_node = previous_node;

	while (*head)/*traverses till current is null*/
	{
		next_node = (*head)->next;/*stores the next node*/
		(*head)->next = previous_node;/*reverses pointer of current node*/
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	return (*head);
}
