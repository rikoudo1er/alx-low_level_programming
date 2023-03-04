#include "main.h"

/**
 * rot13- encodes a string into rot13.
 * @str: string.
 * Return: string encode into rot13.
 */

char *rot13(char *str)
{

	char *rot13 = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	char *alph  = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, len = 0;


	for (; str[len] != '\0'; len++)
	{
		for (i = 0; i < 52; i++)
		{
			if (str[len] == alph[i])
			{
				str[len] = rot13[i];
				break;
			}

		}
	}
	return (str);
}
