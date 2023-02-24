#include "main.h"

/**
 * print_line -draws a straight line in the terminal.
 * @n: number of time the character _ should be printed.
 * Return: nothing
 */

void print_line(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{

		_putchar('_');
	}
	_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
