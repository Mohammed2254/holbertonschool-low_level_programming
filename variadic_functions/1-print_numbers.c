#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: the string to be printed between numbers
 * @n: the number of integers passed to the function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list par;

va_start(par, n);
	for (i = 0 ; i < n; i++)
	{
			printf("%d", va_arg(par, int));
			if (*separator != 0 && *separator != NULL && i + 1 != n)
			{
				printf("%c ", *separator)
			}
		
	}
va_end(par);

printf("\n");
}
