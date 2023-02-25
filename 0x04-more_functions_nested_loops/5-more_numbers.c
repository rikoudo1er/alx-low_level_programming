#include "main.h"
#include <unistd.h>

/**
 * more_numbers- prints 10 times the numbers, from 0 to 1.
 * Return: nothing
 */

void more_numbers(void)
{
	int i, j;
	char ret = '\n';
	char c1, c2;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if(j < 10)
				c2 = '0' + j;

			else
			{
				c1 = '0' + j / 10;
				c2 = '0' + j % 10;
				_putchar(c1);
			}
			_putchar(c2);
		}
		_putchar(ret);
	}

}
