#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - Executes a function on a given name
 * @name: The string to be processed
 * @f: A pointer to a function that takes a string as argument
 *
 * Description: This function takes a string and a pointer to a
 * function. If neither the string nor the function pointer is NULL,
 * it calls the function on the string.
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL  && name != NULL)
	f(name);

}
