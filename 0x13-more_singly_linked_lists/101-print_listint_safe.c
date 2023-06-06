#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current_node, *next_node;

	if (head == NULL)
		exit(98);

	current_node = head;
	while (current_node != NULL)
	{
		next_node = current_node->next;
		printf("[%p] %d\n", (void *)current_node, current_node->n);
		count++;
		if (next_node >= current_node)
		{
			printf("-> [%p] %d\n", (void *)next_node, next_node->n);
			exit(98);
		}
		current_node = next_node;
	}
	return (count);
}
