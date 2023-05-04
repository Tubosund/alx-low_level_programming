#include "main.h"
#include <stdio.h>

/**
 * flip_bits - num of bits to flip from one num to another
 * @n: number of bits
 * @m: number
 *
 * Return: zero
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int q = n ^ m;
	unsigned int count = 0;

	while (q != 0)
	{
		count += q & 1;
		q >>= 1;
	}

	return (count);
}
