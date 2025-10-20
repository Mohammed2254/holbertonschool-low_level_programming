#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of times '_' should be printed
 */

void print_line(int n)
{
int i;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			return;
		}
		_putchar('_');
	}
_putchar('\n');
}
