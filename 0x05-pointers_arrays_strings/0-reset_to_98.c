#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * reset_to_98 - Updates value pointed to by a pointer to 98.
 * @n: A pointer to an integer.
 */
void reset_to_98(int *n)
{
	*n = 98;
}

int main(void)
{
	int num = 42;

	printf("Before reset_to_98: %d\n", num);

	reset_to_98(&num);

	printf("After reset_to_98: %d\n", num);

	return (0);
}
