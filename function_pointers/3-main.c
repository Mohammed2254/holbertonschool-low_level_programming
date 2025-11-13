#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	char *operator = argv[2];
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[3]);

	if (num1 && num2 >= INT_MIN && num1 && num2 <= INT_MAX)
{
	if ((strcmp(argv[2] == "%") == 0 ||strcmp(oparator ,"/") == 0) && num2 == "0") 
	{
		printf("Error\n");
		exit(100);
	}
	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
}
else
{
	printf("Error\n");
	exit(98);
}
	return (0);
}
