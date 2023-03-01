#include "main.h"

/**
 * rev_string- prints a string, in reverse, followed by a new line.
 * @s: string to reverse.
 */

void rev_string(char *s)
{
	int len = 0;
	int i;
	char *start = s, *end = s, temp;

	while (s[len] != '\0')
	{
	len++;
	}

	for (i = 0; i < len - 1; i++)
		end++;

	for (i = 0; i < len / 2; i++)
	{
		temp = *end;
		*end = *start;
		*start = temp;

		end--;
		start++;
	}
}
