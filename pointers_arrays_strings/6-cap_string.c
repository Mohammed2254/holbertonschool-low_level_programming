#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to modify.
 *
 * Return: Pointer to the modified string.
 */
char *cap_string(char *s)
{
int i = 0;

	while (s[i])
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

if ((s[i] == ' ' || s[i] == '\n' || s[i] == '\t' ||
s[i] == ',' || s[i] == ';' || s[i] == '.' ||
s[i] == '!' || s[i] == '?' || s[i] == '"' ||
s[i] == '(' || s[i] == ')' || s[i] == '{' ||
s[i] == '}') &&
(s[i + 1] >= 'a' && s[i + 1] <= 'z'))
	s[i + 1] -= 32;

i++;
}
return (s);
}

