#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - finds loop in linked list
 * @b: points to a string
 *
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (; *b != '\0'; b++)
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b - '0');
	}

	return (result);
}
