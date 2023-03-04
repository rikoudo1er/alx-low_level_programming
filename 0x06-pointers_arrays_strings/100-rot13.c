#include "main.h"

/**
 * rot13- encodes a string into rot13.
 * @str: string.
 * Return: string encode into rot13.
 */

char *rot13(char *str)
{
	char *upper_rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	char *low_rot13 = "nopqrstuvwxyzabcdefghijklm";
	char *low_alph = "abcdefghijklmnopqrstuvwxyz";
	char *upper_alph = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, len = 0;


	for (; str[len] != '\0'; len++)
	{
		for (i = 0; i < 26; i++)
		{
			if (str[len] == low_alph[i])
			{
				str[len] = low_rot13[i];
				break;
			}
			else if (str[len] == upper_alph[i])
			{
				str[len] = upper_rot13[i];
				break;
			}
		}
	}
	return (str);
}
