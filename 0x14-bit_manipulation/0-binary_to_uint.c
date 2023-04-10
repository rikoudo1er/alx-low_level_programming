#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of 0 and 1 chars
 * Return: the converted number, or 0 if
 * -there is one or more chars in the string b that is not 0 or 1
 * -b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int len = 0, i = 0;
	unsigned int res = 0;

	if (!b)
		return (0);
	while (b[len] != '\0')
	{
		if (b[len] == '0' || b[len] == '1')
			len++;
		else
			return (0);
	}

	for (i = 0; i < len; i++)
	{
		if (b[i] == '1')
			res += 1u << (len - (i + 1));

	}
	return (res);


}
