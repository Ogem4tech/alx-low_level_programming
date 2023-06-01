#include <stdlib.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @head: Pointer to the list_t list
 *
 * Return: Number of elements in the list
 */
size_t list_len(const list_t *head)
{
	size_t count = 0;

	while (head)
	{
		count++;
		head = head->next;
	}

	return (count);
}
