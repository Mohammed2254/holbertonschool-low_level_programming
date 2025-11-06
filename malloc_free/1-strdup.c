#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *           which contains a copy of the string given as a parameter
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if it fails
 */
char *_strdup(char *str)
{
if (str == NULL)
return (NULL);

int len = 0;
while (str[len])
len++;

char *copy = malloc(sizeof(char) * (len + 1));
if (copy == NULL)
return (NULL);

int i = 0;
while (str[i])
{
copy[i] = str[i];
i++;
}

copy[i] = '\0';
return (copy);
}

