#include "lists.h"
/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to a pointer to the head of the list
 * @str: string to be added to the new node
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;/*node to be added at the end of the list*/
	list_t *current;/*to traverse the list*/
	size_t len;

	if (str == NULL)/*checks if the input string is null*/
	{
		return (NULL);
	}
	len = strlen(str);/*gets the length of input string*/
	/*allocating memory for the new node*/
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);/*if allocation fails*/
	}
	/*duplicate the string str*/
	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL;/*last node of the list*/
	/*if the list is empty*/
	if (*head == NULL)
	{
		*head = new_node;/*add new_node at the end*/
		return (new_node);
	}
	/*if list is not empty*/
	current = *head;/*traverses till end is reached*/
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new_node;
	return (new_node);
}
