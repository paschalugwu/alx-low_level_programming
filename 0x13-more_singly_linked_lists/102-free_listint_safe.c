#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list safely
 * @h: A pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *temp;
	size_t size = 0;

	while (current)
	{
		temp = current->next;
		free(current);
		size++;

		/* Detect a loop */
		if (temp >= current)
		{
			*h = NULL;
			return (size);
		}
		current = temp;
	}

	*h = NULL;
	return (size);
}
