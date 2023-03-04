#include "main.h"

/**
 * leet- encodes a string into 1337.
 * @str: string.
 * Return: string encode into 1337.
 */

char *leet(char *str)
{
	char *leet_chars = "43071";
	char *low_char = "aeotl";
	char *upper_char = "AEOTL";
	int i, len = 0;


	for (; str[len] != '\0'; len++)
	{
		for (i = 0; i < 5; i++)
		{
			if (str[len] == low_char[i] || str[len] == upper_char[i])
			{
				str[len] = leet_chars[i];
				break;
			}
		}
	}
	return (str);
}
