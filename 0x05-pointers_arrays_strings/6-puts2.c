#include "main.h"

/**
 * puts2 -prints every other character of a string,
 * starting with the first character
 * @str: string to print.
 */

void puts2(char *str)
{
	int len = 0, i;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len - 1; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
