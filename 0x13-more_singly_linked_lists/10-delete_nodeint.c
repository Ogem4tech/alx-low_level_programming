#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at index index of a listint_t
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node that should be deleted. Index starts at 0.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *currentNode, *previousNode;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		currentNode = *head;
		*head = (*head)->next;
		free(currentNode);
		return (1);
	}

	previousNode = *head;
	for (i = 0; i < index - 1; i++)
	{
		if (previousNode == NULL || previousNode->next == NULL)
			return (-1);
		previousNode = previousNode->next;
	}

	currentNode = previousNode->next;
	previousNode->next = currentNode->next;
	free(currentNode);

	return (1);
}
