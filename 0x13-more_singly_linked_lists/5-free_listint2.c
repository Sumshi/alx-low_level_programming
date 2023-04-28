#include "lists.h"
/**
 * free_listint2 -  frees a listint_t list.
 * @head: pointer to pointer to the head of the list
 * Return: Always 0
 */
void free_listint2(listint_t **head)
{
	listint_t *current_node;

	while (*head != NULL)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
	}
}
