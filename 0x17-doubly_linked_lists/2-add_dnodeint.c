#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a list.
 * @head: pointer to a pointer to the head of the list
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;/*new node to be added*/

	new_node = malloc(sizeof(dlistint_t));/*allocate memory for the new node*/
	if (new_node == NULL)
	{
		return (NULL);/*memory allocation failed*/
	}
	new_node->n = n;/*assigns data to the new_node*/
	new_node->prev = NULL;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
