#include "main.h"

/* betty style doc for function main goes there */
/**
 * main -Entry point
 * Return: alway 0 if the program run with succes
 */
int main(void)
{
	char word[10] = "_putchar";
	int i;

	for (i = 0; i <= 8; i++)
		_putchar(word[i]);
	_putchar('\n');
	return (0);
}
