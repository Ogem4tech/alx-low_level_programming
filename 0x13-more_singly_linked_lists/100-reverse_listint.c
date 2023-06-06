#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Reverses a linked list.
 * @head: Double pointer to the head node.
 *
 * Return: Pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *nextNode;

	while (*head)
	{
		nextNode = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = nextNode;
	}
	*head = previous;
	return (*head);
}
