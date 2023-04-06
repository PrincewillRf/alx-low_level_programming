#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * list_len - Show the number of elements of a list
  * @l: A linked list
  *
  * Return: The number of elements of a list
  */
size_t list_len(const list_t *l)
{
	size_t countt = 0;

	while (l)
	{
		l = l->next;
		countt++;
	}

	return (countt);
}
