#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"

/**
 * main- adds positive numbers.
 * @argc: size of @argv.
 * @argv: an array hold the command line arguments.
 * Return: alway 0.
 */

int main(int argc, char *argv[])
{

	int sum = 0, i = 1;

		while (i < argc)
		{
			if (myisdigit(argv[i]))
				sum += atoi((argv[i]));
			else
			{
				printf("Error\n");
				return (1);
			}
			i++;
		}

		printf("%d\n", sum);


	return (EXIT_SUCCESS);


}

