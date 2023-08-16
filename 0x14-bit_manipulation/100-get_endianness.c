#include "main.h"

/**
 * get_endianness - A function that checks endian of a machine
 * Return: To return 0 if big or 1 if little
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return (*c);
}
