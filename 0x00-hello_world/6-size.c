#include <stdio.h>
/**
 * main - this is main
 *
 * Return: ends with 0
 */
int main(void)
{
	printf("size of a char: %c byte(s)", sizeof(char));
	printf("size of an int: %c byte(s)", sizeof(int));
	printf("size of a long int: %c byte(s)", sizeof(long int));
	printf("size of a long long int: %c byte(s)", sizeof(long long int));
	printf("size of a float: %c byte(s)", sizeof(float));
	return (0);
}
