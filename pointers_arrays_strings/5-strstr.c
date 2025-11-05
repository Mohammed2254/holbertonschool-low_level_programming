#include "main.h"
#define NULL ((void *)0)
/**
 * _strstr - Locates a substring.
 * Finds the first occurrence of the entire string needle
 * (excluding the terminating null byte) within the string haystack.
 * @haystack: The pointer to the string to be searched.
 * @needle: The pointer to the substring to be located.
 *
 * Return: A pointer to the beginning of the located substring,
 * or 0 (NULL) if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{

	if (needle[0] == '\0')
	return (haystack);
	while (*haystack)
	{
		int i = 0;
			if (*haystack == needle[i])
			{
			char *h = haystack, *n = needle;
				while (*h && *n && *h == *n)
				{
				h++;
				n++;
				}
					if (*n == '\0')
					return (haystack);
			}
		haystack++;
	}
return (NULL);
}
