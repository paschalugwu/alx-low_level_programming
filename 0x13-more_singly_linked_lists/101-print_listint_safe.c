#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *tortoise = head, *hare = head;

	if (head == NULL)
	{
		exit(98);
	}

	while (tortoise != NULL && hare != NULL && hare->next != NULL)
	{
		printf("[%p] %d\n", (void *)tortoise, tortoise->n);
		count++;

		tortoise = tortoise->next;
		hare = hare->next->next;

		if (tortoise == hare)
		{
			printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
			break;
		}
	}

	return (count);
}
