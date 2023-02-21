#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main -Entry point
 * Return: alway 0 if the program run with succes
 */
int main(void)
{	char letterLow = 'a';
	char letterUper = 'A';

	while (letterLow <= 'z')
	{
		putchar(letterLow);
		letterLow++;
	}
	while (letterUper <= 'Z')
	{
		putchar(letterUper);
		letterUper++;
	}
	putchar('\n');

	return (0);
}
