#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>
/**
 * main - Performs simple arithmetic operations based on user input
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Description: This function takes three arguments from the command line:
 * two integers and an operator. It validates the input and performs the
 * corresponding arithmetic operation (addition, subtraction, multiplication,
 * division, or modulo). It prints the result to standard output.
 *
 * Return: 0 on success, or exits with specific status codes on error
 */
int main(int argc, char *argv[])
{
	char *operator = NULL;
	int num1;
	int num2;
	int result;

	if (argc != 4)
	{
	printf("Error\n");
	exit(98);
	}
	operator = argv[2];
	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((strcmp(operator, "%") == 0 || strcmp(operator, "/") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(operator)(num1, num2);
	printf("%d\n", result);
	return (0);
}
