#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: pointer to the head of the linked list.
 *
 * Return: The address of the node where the loop starts, or NULL if no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{/*use Floyd's cycle detection algorithm,also known as*/
/*"tortoise and hare algorithm*/
	listint_t *slow, *fast;/*one moves at a slower pace than other*/

	if (head == NULL)
		return (NULL);
	slow = head;
	fast = head;

	while (fast != NULL && fast->next != NULL)
	{
		slow = slow->next;
		fast = fast->next->next;

/* If the pointers meet, we have a loop */
		if (slow == fast)
		{
/* Move one pointer to the beginning of the list */
			slow = head;

/* Move both pointers at the same pace until they meet at the start of loop */
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow); /* Return the address of the node where the loop starts */
		}
	}
	return (NULL); /* No loop found */
}
