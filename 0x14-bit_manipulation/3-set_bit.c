#include "main.h"

/**
 * set_bit - A function that sets a bit to 1 at a given index
 * @n: A pointer to the number to be changed
 * @index: index of the bit
 *
 * Return: 1 on success or -1 on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
