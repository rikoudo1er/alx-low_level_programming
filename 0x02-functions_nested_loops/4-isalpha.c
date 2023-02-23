#include "main.h"
#include <ctype.h>

/**
 * _isalpha -check if value of @c is lowercase, upercase or numeric
 * @c: value to check
 * Return: 1 if @c is lowercase and 0 otherwise
 */

int _isalpha(int c)
{

	if (isalpha(c) == 0)
		return (0);
	else
		return (1);
}
