#include<stdio.h>
/**
 * main -Entry point
 * printf:	print string inside in output
 * Return:	alway 0 (succes)
*/
int main(void)
{
	printf("Size of a char: %lu byte(s)\nSize of an int: %lu byte(s)\nSize of a long int: %lu byte(s)\nSize of a long long int: %lu byte(s)\nSize of a float: %lu byte(s)\n", sizeof(char), sizeof(int), sizeof(long int), sizeof(long long int), sizeof(float));
	return (0);
}
