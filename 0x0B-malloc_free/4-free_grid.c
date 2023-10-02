#include "main.h"
#include <stdlib.h>

/**
 * free_grid - function that frees a 2 dimensional grid
 *
 * @g: grid to be freed
 * @h: height of the grid
 *
 * Return: Nothing
 */

void free_grid(int **g, int h)
{
	if (g == NULL || h == 0)
	{
		return;
	}
	for (i = 0; i < h; i++)
	{
		free(g[i]);
	}

	free(g);
}
