#include "main.h"

/**
 * reverse_array - Reverses the content of an integer array
 * @a: The integer array to reverse
 * @n: The number of elements in the array
 *
 * Description: This function reverses the order of elements
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
