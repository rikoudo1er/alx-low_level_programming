#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- adds positive numbers.
 * @argc: size of @argv.
 * @argv: an array hold the command line arguments.
 * Return: alway 0.
 */

int main(int argc, char *argv[])
{

	int sum, i;


	if (argc > 2)
	{

		for (i = 1; i < argc; i++)
		{
			if (isdigit(*argv[i]))
				sum += atoi((argv[i]));
			else
			{
				printf("Error\n");
				return (1);
			}
		}

		printf("%d\n", sum);
	}
	else
		printf("0\n");

	return (EXIT_SUCCESS);


}
