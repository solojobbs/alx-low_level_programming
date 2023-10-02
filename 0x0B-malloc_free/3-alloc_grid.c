#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that returns a pointer to a 2 dimensional array of integers
 * @w: the width of the array
 * @h: height of the array
 *
 * Return: pointer to array
 */

int **alloc_grid(int w, int h)
{
	int **arr, i, j;

	if (w <= 0 || h <= 0)
	{
		return (NULL);
	}

	arr = (int **) malloc(sizeof(int *) * h);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < h;)
	{
		arr[i] = (int *) malloc(sizeof(int) * w);

		if (arr[i] == NULL)
		{
			free(arr);
			
			for (j = 0; j <= i; j++)
			{
				free(arr[j]);
			}
		}
	}

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
