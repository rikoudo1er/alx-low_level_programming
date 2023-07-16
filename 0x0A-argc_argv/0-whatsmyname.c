#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints its name, followed by a new line.
 * @argc: size of @argv.
 * @argv: an array hold the command line arguments.
 * Return: alway 0.
 */

int main(int __attribute__((unused)) argc, char *argv[])
{

	printf("%s\n", argv[0]);

	return (EXIT_SUCCESS);

}

