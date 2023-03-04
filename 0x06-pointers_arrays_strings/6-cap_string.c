#include "main.h"
#include <ctype.h>
#include <stdio.h>

/**
 * cap_string- changes all lowercase letters of a string to uppercase.
 * @c: string.
 * Return:{The value returned is that of the converted letter,
 * or c if the conversion was not possible.}
 */
char *cap_string(char *str)
{
	char _char[] = "9,;.!?(){}\t \"\n";
	int len = 0, j = 0, i;

	while (_char[j] != '\0')
		j++;

	if ((str[len] >= 'a') && (str[len] <= 'z'))
	{	str[len] = str[len] - ' ';
		len++;
	}

	for (;str[len] != '\0'; len++)
	{

		for (i = 0; i < j - 1; i++)
		{
			if (str[len] == _char[i])
			{
				if ((str[len + 1] >= 'a') && (str[len + 1] <= 'z'))
				{	str[len + 1] = str[len + 1] - ' ';
					break;
				}
			}

		}
	}
	return (str);

}
