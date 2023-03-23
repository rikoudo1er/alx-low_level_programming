#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - print a name
 * @name: string contain name.
 * @f: pointer to function for print the name
 */

void print_name(char *name, void (*f)(char *))
{

	if (name != NULL && f != NULL)
	{
		(*f)(name);
	}
}
