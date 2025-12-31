#include "main.h"
/**
 * leet - Converts certain letters.
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

	while (s[i] != '\0')
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
