#include "main.h"
/**
* print_triangle - print a triangle based on size
* @size: it is thesize
* Return: void
*/
void print_triangle(int size)
{
int spaces;
int hash;
int row;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}
	for (row = 1; row < size; row++)
	{
		for (spaces = size; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (hash = 1; hash < size + 1; hash++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}


}
