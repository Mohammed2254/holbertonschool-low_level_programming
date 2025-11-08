#include "main.h"
#include <stdlib.h>

/**
* malloc_checked - allocates memory using malloc
* @b: number of bytes to allocate
*
* Return: pointer to the allocated memory
* If malloc fails, the function exits with status value 98
*/
void *malloc_checked(unsigned int b)
{
void *a = malloc(b);

if (a == NULL)
	exit(98);

return (a);
}

