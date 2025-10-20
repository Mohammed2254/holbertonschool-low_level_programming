#include "main.h"
/**
* print_diagonal - draws a diagonal line
* @n: number of times '\' is printed
*/
void print_diagonal(int n)
{
	int i;
	int spaces = 0;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
			return;
		}
		for (spaces = 0; spaces < j; spaces++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		j++;
		  _putchar('\n');
	}

}
