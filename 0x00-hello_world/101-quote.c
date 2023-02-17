#include<unistd.h>
/**
 * main -Entry point
 * write:	print string inside in output
 * Return:	alway 0 (succes)
*/
int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
