#include "main.h"
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * alloc_grid - creates a 2D array of 0s
 * @width: width of array
 * @height: height
 * Return: pointer to the array
 */
int **alloc_grid(int width, int height)
{
	int **ar, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	ar = malloc(sizeof(int) * height * 2);
	if (ar != NULL)
	{
		i = 0;
		while (i < height)
		{
			ar[i] = malloc(sizeof(int) * width);
			if (ar[i] != NULL)
			{
				j = 0;
				while (j < width)
				{
					ar[i][j] = 0;
					j++;
				}
			}
			else
			{
				free(ar);
				for ( ; i >= 0; i--)
					free(ar[i]);
				break;
			}
			i++;
		}
	}
	else
		free(ar);

	return (ar);
}
