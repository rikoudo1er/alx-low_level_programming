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
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			
			putchar('0' + i);
			putchar('0' + j);
			if ((i == 8) && (j == 9))
				break;
		
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
