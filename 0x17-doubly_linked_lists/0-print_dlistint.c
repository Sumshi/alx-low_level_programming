#include "lists.h"
/**
 *  print_dlistint - prints all the elements of a doubly list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);/*prints the data of each node*/
		h = h->next;/*moves pointer h to the next node*/
		count++;
	}
	return (count);
}
