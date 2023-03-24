#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - print numbeer separeted by @separator.
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_va;
	char *string;

	va_start(list_va, n);

		for (i = 0; i < n; i++)
		{
			string = va_arg(list_va, char*);
			if (string)
				printf("%s", string);
			else
				printf("(nil)");

			if (separator && i < (n - 1))
				printf("%s", separator);

		}

	printf("\n");

	va_end(list_va);

}
