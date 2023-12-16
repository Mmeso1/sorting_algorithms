#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list
 * of integers in ascending order
 *
 * @list: a doubly linked list
 * Return: nothing
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current, *temp;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current)
	{
		temp = current;

		while (temp->prev && temp->n < temp->prev->n)
		{
			if (temp->next)
				temp->next->prev = temp->prev;
			temp->prev->next = temp->next;

			temp->next = temp->prev;
			temp->prev = temp->prev->prev;

			if (temp->prev)
				temp->prev->next = temp;

			if (temp->next)
				temp->next->prev = temp;

			if (!temp->prev)
				*list = temp;

			print_list(*list);
		}

		current = current->next;
	}
}

