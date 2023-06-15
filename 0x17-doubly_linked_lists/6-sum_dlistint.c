#include "lists.h"
/**
 * sum_dlistint - gets sum of all the data (n) of a listint_t
 * @head: pointer to head node
 * Return: returns the sum of all the data (n) of a listint_t
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
