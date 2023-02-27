#include "main.h"

/**
 * swap_int - function that swaps the value of two integers
 *
 * Return: nothing
 * @t: input
 * @a: input
 * @b:input
 */

void swap_int(int *a, int *b)
{
	int t;

	t = *b;
	*b = *a;
	*a = t;
}
