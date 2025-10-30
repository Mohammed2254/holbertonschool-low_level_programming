#include "main.h"
/**
 * print_array - prints the inside array with n numbers
 * @a : the array
 * @n: the num of elem in this arr
 * return : void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i <= n; i++)
	{
	_putchar(a[i]);
	}
	_putchar('\n');
}
