#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data (n) of a listint_t linked list
 * @head: Pointer to the head node of the list
 *
 * Return: The sum of all the data (n), or 0 if the list is empty
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *currentNode;

	currentNode = head;
	while (currentNode != NULL)
	{
		total += currentNode->n;
		currentNode = currentNode->next;
	}
	return (total);
}
