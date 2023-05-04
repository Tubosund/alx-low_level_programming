#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to an index
 * @n: value of a bit
 * @index: index starting from 0
 *
 * Return: 1 success or -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);
	*n |= (1UL << index);
	return (1);
}
