#include "main.h"

/**
 * _strspn- gets the length of a prefix substring.
 * @s:string
 * @accept:prefix substring
 * Return: number of bytes in the initial segment of s,
 * which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j = 0;
	unsigned int len = 0;

	while (s[i] != '\0')
	{
		while (accept[j] != '\0')
		{

			if (s[i] == accept[j])
			{
				len++;
				break;
			}
			j++;
		}

		if (s[i] != accept[j])
			break;

		j = 0;
		i++;
	}
	return (len);
}
