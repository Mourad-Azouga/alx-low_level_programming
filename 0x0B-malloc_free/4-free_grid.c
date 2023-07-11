#include <stddef.h>
#include <stdlib.h>

/**
 * free_grid - Frees memory for a 2D array of integers.
 * @grid: The grid.
 * @height: Height of the grid.
 *
 * Return: Void.
 */
void free_grid(int **grid, int height)
{
int i;
if (grid == NULL)
return;
for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
