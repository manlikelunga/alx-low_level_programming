#include <stdio.h>

/**
 * main - main function
 *
 * Return: 0 means success
 */

int main(void)
{
	printf("Size of a char: %lu\n byte(s)", sizeof(char));
	printf("Size of an int: %lu\n byte(s)", sizeof(int));
	printf("Size of a long int: %lu\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %lu\n byte(s)", sizeof(long long int));
	printf("Size of a float: %lu\n byte(s)", sizeof(float));
	return (0);
}
