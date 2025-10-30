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
	int rev = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	for (i = 0; length / 2 >= 0; i++)
	{
	rev = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = rev;
	}

}
