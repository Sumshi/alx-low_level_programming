#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list.
 * @head: pointer to a pointer to the head of the list
 * @n: parameter
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;/*new node to be added*/

	/*allocate memory for the new node*/
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{/*allocation failed*/
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
