#include <stdio.h>
#include <stdlib.h>

/**
 * main- prints the number of arguments passed into it.
 * @argc: size of @argv.
 * @argv: an array hold the command line arguments.
 * Return: alway 0.
 */

int main(int argc, __attribute__((unused)) char *argv[])
{

	printf("%d\n", (argc - 1));

	return (EXIT_SUCCESS);

}

