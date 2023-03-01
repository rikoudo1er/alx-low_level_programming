#include "main.h"

/**
 * puts_half -prints half of a string, followed by a new line.
 * @str: string to print half.
 */

void puts_half(char *str)
{
	int len = 0, i, n;

	while (str[len] != '\0')
	{
		len++;
	}

	if ((len + 1) % 2 != '0')
		n = (len - 1) / 2;
	else
		n = len / 2;
	n++;

	for (i = n; i <= len - 1; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
