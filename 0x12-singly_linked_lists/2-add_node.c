#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;/*new node to be added*/

	/*allocating memory for the new node*/
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	/*duplicate the string str*/
	new_node->str = strdup(str);

	if (new_node->str == NULL)/*duplication failed*/
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);/*gets length of new string*/
	new_node->next = *head;/*sets the next pointer to point to head*/
	*head = new_node;/*head contains new_node*/
	return (new_node);
}
