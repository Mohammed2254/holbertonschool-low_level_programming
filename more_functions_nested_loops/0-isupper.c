#include "main.h"
/**
 *_isupper - chech if upper or lowercase
 *
 *
 * return 0 if lower , 1 if upper. 
 */
 int _isupper(int c)
{

	if (c >= 'z' && c <= 'a')
	{

	return (0);
	}
	else if ( c >= 'Z' && c <= 'A')
	{

	return (1);
	}


}
