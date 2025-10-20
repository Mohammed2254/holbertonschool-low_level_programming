#include "main.h"
/**
* more_numbers - prints numbers from 0 to 14, 10 times
*/
void more_numbers(void)
{
int repeat, num;

	for (repeat = 0; repeat < 10; repeat++)
	{
		for (num = 0; num < 15; num++)
		{
			if (num >= 10)
			{
				_putchar(num / 10 + '0');
			}
			if (num < 10 || num >= 10)
			{
				_putchar(num % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
