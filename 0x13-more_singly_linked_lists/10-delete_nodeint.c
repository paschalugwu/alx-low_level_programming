#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a specific index
 *								in a listint_t linked list.
 * @head: Pointer to the head of the list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	current = *head;

	for (i = 0; i < index - 1; i++)
	{
		if (current->next == NULL)
			return (-1);
		current = current->next;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
