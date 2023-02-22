#include "main.h"
#include <ctype.h>

/**
 * _islower -check if value of @c is lowercase
 * @c: value to check
 * Return: 1 if @c is lowercase and 0 otherwise
 */

int _islower(int c)
{

	if (islower(c) == 0)
		return (0);
	else
		return (1);
}
