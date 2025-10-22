#include "main.h"
#include <stdio.h>
/**
 * main - prints numbers from 1 to 100, replacing multiples of 3 and 5
 * Description: prints "Fizz" for multiples of 3, "Buzz" for multiples of 5,
 * and "FizzBuzz" for numbers that are multiples of both 3 and 5.
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;

	for (n = 1; n < 101; n++)
	{
		if (n % 5 == 0 && n % 3 != 0)
		{
			printf("Buzz");
		}
		else if (n % 5 != 0 && n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{

		printf("%d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
	}
printf("\n");
return (0);
}
