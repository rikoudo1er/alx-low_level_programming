#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - print numbeer separeted by @separator.
 * @separator: the string to be printed between numbers
 * @n: number of integers passed to the function.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list_va;

	if (n == 0)
		return;
	va_start(list_va, n);

	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{

			printf("%d", va_arg(list_va, int));
			if (i == (n - 1))
				break;
			printf("%s", separator);
		}
	}

	if (separator == NULL)
	{
		for (i = 0; i < n; i++)
			printf("%d", va_arg(list_va, int));
	}
	printf("\n");

	va_end(list_va);

}
