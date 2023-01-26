#include "lists.h"

/**
 * print_list - Prints all elements of a list_t list
 * @h : list_t list
 * Return: number of elements in the list.
 */

size_t print_list(const list_t *h)
{
	size_t NumOfElements;

	if (h == NULL)
		return (0);

	NumOfElements = 0;

	while (h != NULL)
	{
		NumOfElements++;
		(h->str != NULL)
			? printf("[%lu] %s\n", strlen(h->str), h->str)
			: printf("[0] (nil)\n");

		h = h->next;
	}

	return (NumOfElements);
}
