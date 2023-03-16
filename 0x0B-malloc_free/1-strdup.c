#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup-returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return:...
 */

char *_strdup(char *str)
{

	char *str2;
	int len = 0;

	while (str[len] != '\0')
		len++;

	if (str  == NULL)
		return (NULL);

	str2 = (char *)malloc(len * sizeof(char));

	if (str2 == NULL)
		return (NULL);

	strcpy(str2, str);
	return (str2);
}
