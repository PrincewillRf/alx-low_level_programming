#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int to search
 * @index: index to return
 * Return: the value of the bit at index or -1 if error
*/

/**
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);
	return ((n >> index) & 1);
}

*/
int get_bit(unsigned long int n, unsigned int index) {
    // Check that index is not out of range
    if (index >= sizeof(unsigned long int) * 8) {
        return -1;
    }

    // Shift the bit at the given index to the least significant position
    unsigned long int shifted = n >> index;

    // Get the least significant bit of the shifted value
    int bit_value = shifted & 1;

    return bit_value;
}

