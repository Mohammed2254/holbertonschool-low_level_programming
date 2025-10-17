#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number.
 * @n: The number in question.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int n)
{
if (n >= 0)
{	
_putchar((n % 10) + '0' );
}
else
{
_putchar('-');
	n = -n ;

_putchar(n % 10 + '0');	
n = -n;
return (-n % 10);
}

return (n % 10);

}
