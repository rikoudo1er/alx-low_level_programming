#include "main.h"
#include <string.h>

/**
 * _strpbrk-searches a string for any of a set of bytes.
 * @s:string
 * @accept:string
 * Return: pointer to the byte in s that matches.
 * one of the bytes in accept, or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{

	char c;
	int i = 0;

	while (*s != '\0')
	{
		while (accept[i] != '\0')
		{
			c = accept[i];

			if (*s == c)
			{
				return (s);
			}
			i++;
		}
		i = 0;
		++s;

	}
	return (NULL);
}
