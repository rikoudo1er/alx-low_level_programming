#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat-concatenates two strings.
 * @s1: string 1.
 * @s2: string 2
 * Return:NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{

	char *str;
	int i, j;

	if (s1  == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	str = (char *)malloc(((strlen(s1) + strlen(s2)) + 1) * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; *(s1 + i) != '\0'; i++)
		*(str + i) = *(s1 + i);

	for (j = 0; *(s2 + j) != '\0'; j++)
	{
		*(str + i) = *(s2 + j);
		i++;
	}
	return (str);
}

