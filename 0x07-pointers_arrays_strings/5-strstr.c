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
	char *hay, *need;

	while (haystack[i] != '\0')
	{
		hay = haystack;
		need = needle;

		while (*haystack != '\0' && *need != '\0' && *haystack == *need)
		{
			haystack++;
			need++;
		}
		if (*need == '\0')
			return (hay);

		haystack = hay + 1;
	}
	return (NULL);
}
