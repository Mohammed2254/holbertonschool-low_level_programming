#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * The function uses a temporary buffer to perform the reversal.
 * @a: A pointer to the array of integers.
 * @n: The number of elements in the array.
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
int i = 0;
int temp;

	for (; i < n / 2 ; i++)
	{ temp = a[n - i - 1];
	a[n - i - 1] = a[i];
	a[i] = temp;

	}


}
