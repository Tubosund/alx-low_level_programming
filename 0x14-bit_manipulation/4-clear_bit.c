#include "main.h"

/**
 * clear_bit - sets value of a bit to an idex
 * @n: value of an idex
 * @index: idex
 *
 * Return: 1 success or -1 error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	*n &= ~(1UL << index);

	return (1);
}
