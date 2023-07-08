#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
  * print_list - prints a singly linked list
  * @h: head of the list
  * Return: number of elements in the list
  */
size_t print_list(const list_t *h)
{
	unsigned int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		i++;
	}

	return (i);
}
