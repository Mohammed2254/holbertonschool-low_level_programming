#include "main.h"
#include <stdlib.h>

/**
* free_grid - frees a 2D array of integers
* @grid: pointer to the 2D array
* @height: number of rows in the grid
*
* Description: Frees each row of the grid, then frees the main grid pointer.
*/
void free_grid(int **grid, int height)
{
int i = 0;

for (i = 0; i < height; i++)
free(grid[i]);

free(grid);
}
