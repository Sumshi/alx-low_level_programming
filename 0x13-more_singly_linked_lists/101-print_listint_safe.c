#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list safely
 * @head: pointer to the start of the linked list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node_count = 0;/*Counter for number of nodes printed*/
	const listint_t *current_node = head;/*Pointer to the current node*/
/*Array to store previous nodes*/
	const listint_t *previous_nodes[1024] = {NULL};
	size_t i;

	while (current_node != NULL)
	{
		int is_cycle = 0;/*Flag to indicate if a cycle has been found*/

		for (i = 0; i < node_count; i++)
		{
			if (current_node == previous_nodes[i])
			{
				printf("-> [%p] %d\n", (void *)current_node, current_node->n);
				is_cycle = 1;
				break;
			}
		}
	/*If a cycle has been found, return the number of nodes printed*/
		if (is_cycle)
		{
			return (node_count);
		}
	/*Print current node's address and value*/
		printf("[%p] %d\n", (void *)current_node, current_node->n);
	/*Add current node to previous nodes array*/
		previous_nodes[node_count] = current_node;
		node_count++;/*Increment node count*/

		if (node_count >= 1024)/*Check if number of printed nodes is too large*/
		{
			exit(98);/*If it is, exit the program with an error code of 98*/
		}

		current_node = current_node->next;/*Move to the next node*/
	}
	/*Return the number of nodes printed,also the number of nodes in the list*/
	return (node_count);
}

