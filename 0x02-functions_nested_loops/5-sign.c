#include "main.h"
#include <ctype.h>

/**
 * print_sign -check if value in @n is positive, negative or null
 * @n: value to check
 * Return:	'+' if @n is positive (greater than '0')
 *		'-' if @c is negative (less than '0')
 *		'0' @n is null (@n is '0');
 */

int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
