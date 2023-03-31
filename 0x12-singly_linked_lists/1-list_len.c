#include "lists.h"

/**
 * list_len - function thst prints the number of elements in list
 * @list_t: holds the input
 * @h: the input
 *
 * return: always 0 for success
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
