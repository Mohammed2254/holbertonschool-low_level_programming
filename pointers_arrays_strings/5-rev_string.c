#include "main.h"
/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to reverse
 *
 * Description: swaps characters from both ends of the string
 * until reaching the middle. Works in place without extra memory.
 */
void rev_string(char *s)
{
	int i;
	int length = 0;
	char rev;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; i  < length / 2; i++)
	{
	rev = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = rev;
	}

}
