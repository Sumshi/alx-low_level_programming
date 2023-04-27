#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */

size_t print_list(const list_t *h)
{

	size_t count = 0;/*keeps track of number of nodes in the list*/

	while (h != NULL)/*as long as current node is not null*/
	{
		if (h->str == NULL)
		{/*string member pointed by head*/
			printf("[0] (nil)\n");
		}
		else
		{
			/*prints the length followed by the string*/
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;/*moves to the next node in the list*/
		h = h->next;/*points to the next node*/
	}
	return (count);
}
