#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints all arguments it receives.
 * @argc: size of @argv.
 * @argv: an array hold the command line arguments.
 * Return: alway 0.
 */

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (EXIT_SUCCESS);

}

