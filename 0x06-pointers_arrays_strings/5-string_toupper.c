#include "main.h"
#include <ctype.h>

/**
 * string_toupper- changes all lowercase letters of a string to uppercase.
 * @c: lowercase letter.
 * Return:{The value returned is that of the converted letter,
 * or c if the conversion was not possible.}
 */

char *string_toupper(char *c)
{
	int i, len = 0;

	while (c[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len - 1; i++)
	c[i] = toupper(c[i]);

	return (c);

}
