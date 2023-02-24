#include "main.h"

/**
 * print_diagonal -draws a straight line in the terminal.
 * @n: number of time the character \ should be printed.
 * Return: nothing
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
	for (i = 0; i < n; i++)
	{

		_putchar('\\');
		_putchar('\n');
	}
	_putchar('\n');
	}
	else if (n <= 0)
		_putchar('\n');
}
