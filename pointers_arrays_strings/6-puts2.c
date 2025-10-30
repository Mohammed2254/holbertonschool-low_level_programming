#include "main.h"
/**
* _puts - kjsnklvnk
* @str: pointer to the string to print
*
* Return: void
*/
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str = str + 2;
	}
	_putchar('\n');
}
