#include "main.h"
#include <ctype.h>

/**
 * _isdigit -check if value of @c is digit
 * @c: value to check
 * Return: 1 if @c is lowercase and 0 otherwise
 */

int _isdigit(int c)
{

	if (isdigit(c) == 0)
		return (0);
	else
		return (1);
}
