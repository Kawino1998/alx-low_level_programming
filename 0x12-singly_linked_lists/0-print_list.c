#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	list_t temp = h;
	size_t s = 0;

	while (temp->next != NULL)
	{
		if (!temp->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
		s++;
	}

	return (s);
}
