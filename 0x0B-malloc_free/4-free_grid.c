#include <stdlib.h>

/**
 * free_grid -  function that frees a 2 dimensional grid.
 * @grid: 2 dimensional grid.
 * @height:   height of the grid.
 */

void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	if (!grid || height <= 0)
		return;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
