#include "main.h"

/**
 * _pow_recursion -returns the value of @x raised to the power of @y.
 * @x:number.
 * @y:power.
 * Return: result of @x raised to power @y.
 */

int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	else if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	return(x * _pow_recursion(x, y - 1));
}
