#include "main.h"
#include <string.h>

/**
 * _strstr-locates a substring.
 * @haystack:string
 * @needle:string
 * Return:a pointer to the beginning of the located substring,
 * or NULL if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{

	int i = 0;

	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[i])
		{
			return (needle);
		}
		i++;
	}
	return (NULL);
}
