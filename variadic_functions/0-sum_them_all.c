#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: number of arguments
 *
 * Return: the sum of all parameters, or 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int i;
	va_list par;
	int sum = 0;

	if (n == 0)
	{
		return (0);
	}
	va_start(par, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(par, int);
		}
	va_end(par);
return (sum);
}
