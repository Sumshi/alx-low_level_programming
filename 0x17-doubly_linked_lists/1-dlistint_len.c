#include "lists.h"
/**
 * dlistint_len - prints number of elements in a doubly linked list
 * @h: pointer to the head of the list
 * Return: the number of elements in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;/*points to next node*/
		count++;/*count continues to increase*/
	}
	return (count);
}
