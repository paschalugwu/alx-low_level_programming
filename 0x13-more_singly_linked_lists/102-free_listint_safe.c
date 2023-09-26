#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list
 * @h: Pointer to the head of the list
 *
 * Return: The size of the list that was freed
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current = *h;
	listint_t *temp;
	size_t count = 0;

	while (current != NULL)
	{
		count++;
		if (current <= current->next)
		{
			*h = NULL;
			return (count);
		}
		temp = current;
		current = current->next;
		free(temp);
	}

	*h = NULL;
	return (count);
}
