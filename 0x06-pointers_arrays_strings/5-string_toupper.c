#include "main.h"

/**
 * string_toupper- changes all lowercase letters of a string to uppercase.
 * @c: lowercase letter.
 * Return:{The value returned is that of the converted letter,
 * or c if the conversion was not possible.}
 */

char *string_toupper(char *c)
{
	int i = 0;

	while (*(c + i))
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			*(c + i) -= 'a' - 'A';
		i++;
	}

	return (c);

}
