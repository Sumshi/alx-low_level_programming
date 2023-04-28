#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of list.
 * @head: pointer to a pointer to the head of the list
 * @n: number to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;/*node to be added*/
	listint_t *current_node;/*for traversing*/

	if (head == NULL)
	{
		return (NULL);
	}
	/*allocating memory for new node*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	/*initialize new node*/
	new_node->n = n;
	new_node->next = NULL;/*end of list*/
	/*If the list is empty, set the head to be the new node*/
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	/*else Traverse the list to find the last node*/
	current_node = *head;
	while (current_node->next != NULL)
	{
		current_node = current_node->next;
	}
	/* Append the new node to the end of the list */
	current_node->next = new_node;
	return (new_node);
}
