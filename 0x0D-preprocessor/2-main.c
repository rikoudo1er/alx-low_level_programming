#include <stdio.h>

/**
 * main - entry point
 * Return: 0 if success
 * Description:prints the name of the file it was compiled from.
 */

int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
