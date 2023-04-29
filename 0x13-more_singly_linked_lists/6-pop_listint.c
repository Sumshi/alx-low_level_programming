#include "lists.h"
/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head list
 * Return: head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	int data;/*stores the data value of deleted node*/
	listint_t *current_node;/*stores address of deleted node*/

	if (*head == NULL)/*checks if list is empty*/
	{
		return (0);
	}

	/* Save the data of the head node in data variable*/
	data = (*head)->n;

	/* Move the head pointer to the next node */
	current_node = *head;/*saves the address of head node in current*/
	*head = (*head)->next;

	/* Free the memory allocated for the old head node */
	free(current_node);

	return (data);/*returns saved data of deleted node*/
}
