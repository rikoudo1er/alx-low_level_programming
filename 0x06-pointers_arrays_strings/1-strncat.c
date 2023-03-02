#include "main.h"
#include <string.h>

/**
 * *_strncat -concatenates two strings.
 * @dest: destination string.
 * @src: source string.
 * @n:bytes from src.
 * Return: @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));

}
