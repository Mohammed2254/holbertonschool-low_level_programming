#include "main.h"
/**
 * jack_bauer - Prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 */
void jack_bauer(void)
{
int min, hours;

_putchar('0');
_putchar('0');
_putchar(':');
_putchar('0');
_putchar('0');

	for (min = hours = 0; hours < 24;)
	{	min++
	
		if (min == 60)
		{
			min = 0;
			hours++;
		}

		if (hours < 10)
		{
			_putchar('0');
			_putchar(hours + '0');
		}
	else
	{
		_putchar(hours / 10 + '0');
		_putchar(hours % 10 + '0');
	}

_putchar(':');

	if (min < 10)
	{
	_putchar('0');
	_putchar(min + '0');
	}
else
{
_putchar(min / 10 + '0');
_putchar(min % 10 + '0');
}
_putchar('\n');
	}
}
