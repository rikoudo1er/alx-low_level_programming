#include "main.h"

/**
 * print_alphabet_x10- print the alphabet, in lowecase followed by a new line
 * Return: nothing
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}
