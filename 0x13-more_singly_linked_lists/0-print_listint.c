#include "lists.h"
/**
 *  print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)/*as long as head is not egual to null*/
	{
		printf("%d\n", h->n);/*prints the value of each node*/
		h = h->next;/*moves pointer h to the next node*/
		count++;
	}
	return (count);
}
