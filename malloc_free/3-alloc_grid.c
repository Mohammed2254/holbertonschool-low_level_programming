#include "main.h"
#include <stdlib.h>
int **alloc_grid(int width, int height)
{
        int i;
        int **array = NULL;
        int j;
        if (width <= 0 || height <= 0)
                return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
return (NULL);
                for (i = 0; i < height; i++)
                {
                        array[i] = malloc(sizeof(int) * width);
			if (array[i] == NULL)
			{
				for (j = 0; j < i; j++)
					free(array[j]);
					free(array);
				return (NULL);
			}
                }
                i = 0;
                while (i < height)
                {

                        for ( j = 0; j < width; j++)
                        array[i][j] = 0;
                i++;
                }
        return (array);
}
