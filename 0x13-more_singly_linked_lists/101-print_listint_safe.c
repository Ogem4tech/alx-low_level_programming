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
	const listint_t *currentNode, *nextNode;

	if (head == NULL)
		exit(98);

	currentNode = head;
	while (currentNode != NULL)
	{
		nextNode = currentNode->next;
		printf("[%p] %d\n", (void *)currentNode, currentNode->n);
		count++;
		if (nextNode >= currentNode)
		{
			printf("-> [%p] %d\n", (void *)nextNode, nextNode->n);
			exit(98);
		}
		currentNode = nextNode;
	}
	return (count);
}
