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
{	char letter = 'a';
	while (letter <= 'z')
	{
	if ((letter == 'e'))
	letter++;



	if ((letter == 'q'))
	letter++;


	putchar(letter);
	letter++;
	}
	printf("\n");

	return (0);
}
