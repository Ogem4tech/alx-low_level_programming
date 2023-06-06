#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */
size_t listint_len(const listint_t *head)
{
	size_t element_count = 0;

	while (head)
	{
		element_count++;
		head = head->next;
	}

	return (element_count);
}
