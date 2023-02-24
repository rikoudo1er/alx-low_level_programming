#include "main.h"
#include <ctype.h>

/**
 * _isupper -check if value of @c is lowercase
 * @c: value to check
 * Return: 1 if @c is lowercase and 0 otherwise
 */

int _isupper(int c)
{

	if (isupper(c) == 0)
		return (0);
	else
		return (1);
}
