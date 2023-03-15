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

	int sum, arg1, arg2;

	if (argc > 1)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		sum = arg1 * arg2;

		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (EXIT_SUCCESS);

}
