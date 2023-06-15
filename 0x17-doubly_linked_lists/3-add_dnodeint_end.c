#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of list.
 * @head: pointer to a pointer to the head of the list
 * @n: number to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *current_node;/*for traversing the list*/

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	/*initialize the new node*/
	new_node->n = n;/*assigns data*/
	new_node->next = NULL;/*end of list*/
	/*If the list is empty, set the head to be the new node*/
	if (*head == NULL)
	{
		new_node->prev = NULL;/*since list is empty*/
		*head = new_node;
		return (new_node);
	}
	/*if list is not empty*/
	current_node = *head;/*assigning current node as the head*/
	while (current_node->next != NULL)/*not end of list*/
	{
		current_node = current_node->next;
	}
	current_node->next = new_node;/* Append the new node to the end of the list */
	new_node->prev = current_node;
	return (new_node);
}
