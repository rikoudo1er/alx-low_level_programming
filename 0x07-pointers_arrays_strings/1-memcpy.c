#include "main.h"

/**
 * _memcpy- copy memory area.
 * @dest:buffer destination.
 * @src: beffer source.
 * @n: bytes from memory area src.
 * Return:pointer to @dest.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);


}
