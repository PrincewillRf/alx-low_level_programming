#include "main.h"
/**
  * clear_bit - sets the value of a bit to 0 at a given index
  * @n: unsigned long to change
  * @index: index to change to zero
  * Return: 1 if it worked or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
  int b = 53;
	int clearr;

	if (index > b || !n)
		return (-1);
	clearr = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clearr);
	return (1);
}
