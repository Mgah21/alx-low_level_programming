#include "main.h"

/**
 * binary_to_uint - this function uses the translation binary to unsigned
 * @b: Display a pointer  binary string
 * Return: -1
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int baces = 1, r = 0, l = 0;

	if (b == NULL)
{
		return (0);
	}

	for (l = 0; b[l]; l++)

	for (int i = l - 1; i >= 0; i--)
{
		if (b[i] != '0' && b[i] != '1')
{
			return (0);
		}

		if (b[i] == '1')
{
			r += baces;
		}

		baces *= 2;
	}

	return (r);
}
