#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
/**
 * main - Entry point for the simple calculator program
 * @argc: Number of arguments passed to the program
 * @argv: Array of strings containing the arguments
 *
 * Description: This program performs a simple arithmetic operation
 * on two integers based on the operator provided as input. It checks
 * for the correct number of arguments, validates the operator, and
 * handles division/modulo by zero. The program exits with specific
 * status codes for errors:
 *   98 - Incorrect number of arguments
 *   99 - Invalid operator
 *  100 - Division or modulo by zero
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *operator = argv[2];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (argc != 4)
	{
		printf("Error\n");
	exit(98);
	}
	if ((strcmp(operator, "%") == 0 ||strcmp(operator, "/") == 0) && num2 == 0) 
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(operator) == NULL)
	{
		printf ("Error\n");
		exit(99);
	}
	return (0);
}
