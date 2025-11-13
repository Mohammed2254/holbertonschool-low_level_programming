#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <string.h>

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
int num1, num2;
char *operator;
int (*op_func)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

num1 = atoi(argv[1]);
num2 = atoi(argv[3]);
operator = argv[2];

op_func = get_op_func(operator);

if (op_func == NULL)
{
printf("Error\n");
exit(99);
}

if ((strcmp(operator, "%") == 0 || strcmp(operator, "/") == 0) && num2 == 0)
{
printf("Error\n");
exit(100);
}

printf("%d\n", op_func(num1, num2));

return (0);
}
