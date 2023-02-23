#include "main.h"

/**
 * print_last_digit -print the last digit of a number (@numb)
 * @numb: number to print and return the last digit
 * Return: last digit
 */

int print_last_digit(int numb)
{
	if (numb >= 0)
		numb %= 10;

	if (numb < 0)
	{
		numb *= -1;
		numb %= 10;
		if (numb < 0)
			numb *= -1;
	}

	_putchar('0' + numb);
	return (numb);
}
