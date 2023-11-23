#include "main.h"

/**
 * binary_to_uint - from binary to unsigned int
 * @b: binary number
 * Return: success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;

	if (!b)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		number <<= 1;
		number += *b - '0';
		b++;
	}

	return (number);
}
