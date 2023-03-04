#include "main.h"
#include <stdio.h>

/**
 * reverse_array- reverses the content of an array of integers.
 * @a: the array.
 * @n: the number of elements of the array
 */

void reverse_array(int *a, int n)
{
	int i, temp;
       int *start = a, *end = a;

        for (i = 0; i < n - 1; i++)
                end++;

        for (i = 0; i < n / 2; i++)
        {
                temp = *end;
                *end = *start;
                *start = temp;

                end--;
                start++;
        }



}
