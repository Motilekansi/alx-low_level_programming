#include <stdio.h>
/**
 * main - this is main
 *
 * Return: ends with 0
 */
int main(void)
{
	printf("size of a char: %c byte(s)\n", sizeof(char));
	printf("size of an int: %c byte(s)\n", sizeof(int));
	printf("size of a long int: %c byte(s)\n", sizeof(long int));
	printf("size of a long long int: %c byte(s)\n", sizeof(long long int));
	printf("size of a float: %c byte(s)\n", sizeof(float));
	return (0);
}
