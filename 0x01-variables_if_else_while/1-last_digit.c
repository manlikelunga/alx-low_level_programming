#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Generates a random number between 0 and 99,
 * calculates its last digit, and prints information about the last digit.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int m;

	srand(time(0));
	n = rand() % 100; /*  Generate a random number between 0 and 99 */

	m = n % 10;
	if (m > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	else if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	else if (m < 6 && m != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);

	return (0);
}
