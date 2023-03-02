#include "main.h"
#include <string.h>

/**
 * _strncpy- copies the string pointed to by src,
 * to the buffer pointed to by dest.
 * @dest: destination string.
 * @src: source string.
 * @n:bytes from src.
 * Return: @dest.
 */

char *_strncpy(char *dest, char *src, int n)
{
	return (strcpy(dest, src, n));

}
