#include "main.h"
/**
 * _islower - Checks if a character is lowercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is lowercase, 0 otherwise.
 */
int _islower(int c)
{ int i;

	int g;

	for( i = 97;i >= 97 && i < 123;  i++)
	{
	if ( i == c )
	{
		g = 1 ;
	
	} else if (i != c)
	{
		g = 0;
		
		
	}
	}
return(g);	
}
