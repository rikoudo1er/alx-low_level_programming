#include "main.h"

/**
 * _strlen_recursion-return th length of a string.
 * @s: string to print
 * Return: the length of the string
 */

int _strlen_recursion(char *s)
{

	int len = 0;

	if (*s == '\0')
		return (len);

	len ++;
	s++;
	return (len + _strlen_recursion(s));
}
