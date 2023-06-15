#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node from a dlistint_t
 *                            at a given index.
 * @head: A pointer to the head of the dlistint_t.
 * @index: The index of the node to delete.
 *
 * Return: Upon success - 1.
 *         Otherwise - -1.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;/*assigns to head to traverse a list*/

	if (*head == NULL)/*list is empty*/
		return (-1);
	while (index != 0)
	{
		if (tmp == NULL)/*desired index is out of range*/
			return (-1);
		tmp = tmp->next;
		index--;/*loops till index = 0*/
	}
	if (tmp == *head)/*if node to be deleted is head*/
	{
		*head = tmp->next;
		if (*head != NULL)
			(*head)->prev = NULL;
	}
	else/*node to be deleted is not head*/
	{
		tmp->prev->next = tmp->next;
		if (tmp->next != NULL)
			tmp->next->prev = tmp->prev;
	}
	free(tmp);
	return (1);/*node deleted succesfully*/
}
