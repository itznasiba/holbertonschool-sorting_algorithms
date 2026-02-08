#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *insert, *tmp;

	if (!list || !*list || !(*list)->next)
		return;

	current = (*list)->next;

	while (current)
	{
		insert = current;
		tmp = current->next;

		while (insert->prev && insert->n < insert->prev->n)
		{
			insert->prev->next = insert->next;

			if (insert->next)
				insert->next->prev = insert->prev;

			insert->next = insert->prev;
			insert->prev = insert->prev->prev;

			insert->next->prev = insert->prev;

			if (insert->prev)
				insert->prev->next = insert;
			else
				*list = insert;
			print_list(*list);
		}
		current = tmp;
	}
}
