#include "main.h"
/**
 * print_binary - prints the binary representation of a numnber
 * @n: unsigned long, number to be represented in binary
 */




/**void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	(n & 1) ? _putchar('1') : _putchar('0');
}
*/


void print_binary(unsigned long int n) {
  // Determine the number of bits in an unsigned long int
  const unsigned int num_bits = sizeof(unsigned long int) * CHAR_BIT;

  // Start at the most significant bit and shift left until a set bit is found
  unsigned long int mask = (unsigned long int)1 << (num_bits - 1);

  while ((mask & n) == 0) {
    mask >>= 1;
  }

  // Print the binary representation of n
  while (mask != 0) {
    if ((mask & n) != 0) {
      putchar('1');
    } else {
      putchar('0');
    }
    mask >>= 1;
  }
}

