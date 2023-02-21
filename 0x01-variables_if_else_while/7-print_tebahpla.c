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
{	char letter = 'z';
	char br = '\n';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar(br);

	return (0);
}
