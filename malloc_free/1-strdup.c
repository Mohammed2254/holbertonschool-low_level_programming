#include "main.h"
#include <stdlib.h>

char *_strdup(char *str)
{
	int len = 0;
	char *copy = 0;
	int i = 0;

	while (str[len])
		len++;
	*copy = malloc((sizeof char) * (len + 1));
        if (copy == NULL)
        return (NULL);

	if ( str == NULL)
		return (NULL);

	while (str[i])
	{
	 copy[i] = str[i];
		i++;
	}
return (copy);
}
