#include <stdio.h>
#include <unistd.h>
/**
 * main - this is main
 *
 * Return: ends with 1
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
