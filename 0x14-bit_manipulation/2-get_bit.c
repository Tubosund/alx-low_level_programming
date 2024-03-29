#include "main.h"
#include <limits.h>

/**
 * get_bit - gives value of a given index
 * @n: value of index
 * @index: index starting from zero
 *
 *Return: 0 success or -1 for error
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * CHAR_BIT)
		return (-1);

	return ((n >> index) & 1);
}
