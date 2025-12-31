#include "main.h"
/**
 * leet - Converts certain letters in a string to their "1337" (leet) equivalents.
 *
 * This function replaces specific alphabetic characters with corresponding
 * numeric characters based on a predefined mapping:
 *   a/A -> 4, e/E -> 3, o/O -> 0, t/T -> 7, l/L -> 1
 *
 * The conversion is done in-place, meaning the original string is modified.
 *
 * @s: Pointer to the string to be converted.
 *
 * Return: Pointer to the modified string.
 */
char *leet(char *s)
{
	char value[] = "4433007711";
	char *letters = "aAeEoOtTlL";
	int i = 0;
	int j = 0;

	while(s[i] != '\0')
	{
		while (letters[j])
		{
			if (s[i] == letters[j])
				s[i] = value[j];
			j++;
		}

	j = 0;
	i++;
	}

return (s);
}
