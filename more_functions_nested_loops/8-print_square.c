#include "main.h"
/**
 * print_square - prints a square of '#' characters
 * @size: the size of the square
 */
void print_square(int size)
{
int hight;
int width;
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (hight = 0; hight < size; hight++)
		{
			for (width = 0; width < size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}



}
