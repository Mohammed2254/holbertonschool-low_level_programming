#include "main.h"
/**
* print_triangle - prints a right-aligned triangle using '#'
* @size: the size of the triangle
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

	for (row = 1; row <= size; row++)
	{
		for (spaces = size - row; spaces > 0; spaces--)
		{
			_putchar(' ');
		}
		for (hash = 1; hash <= row; hash++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}

