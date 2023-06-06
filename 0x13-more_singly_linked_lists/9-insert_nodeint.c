#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added. Index starts at 0.
 * @n: Integer value to be added in the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *newNode, *currentNode;

	if (head == NULL)
		return (NULL);

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	currentNode = *head;
	for (i = 0; i < idx - 1; i++)
	{
		if (currentNode == NULL || currentNode->next == NULL)
		{
			free(newNode);
			return (NULL);
		}
		currentNode = currentNode->next;
	}

	newNode->next = currentNode->next;
	currentNode->next = newNode;
	return (newNode);
}
