#include "main.h"

/**
 * print_triangle- print a triangle with the character '#'.
 * @size: is the size of the square.
 * Return: nothing
 */

void print_triangle(int size)
{
	int i, j, k, l;


	if (size > 0)
	{

		j = size - 1;
		for (i = 0; i < size; i++)
		{
			l = j;
			while (l > 0)
			{
				_putchar(' ');
				l--;
			}

			for (k = 0; k <= i; k++)
			{

				_putchar(35);
			}


			_putchar('\n');
			j--;
		}

	}

	if (size <= 0)
	_putchar('\n');


}
