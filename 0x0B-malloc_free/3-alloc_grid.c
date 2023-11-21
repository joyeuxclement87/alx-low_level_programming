#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - nested for grid
 * @width: input for weight
 * @height: input for height
 * Return: array
 */
int **alloc_grid(int width, int height)
{
	int **mes;
	int a, b;

	if (width <= 0)
		return (NULL);
	if (height <= 0)
		return (NULL);

	mes = malloc(sizeof(int *) * height);

	if (mes == NULL)
		return (NULL);
	for (a = 0; a < height; a++)
	{
		mes[a] = malloc(sizeof(int) * width);

		if (mes[a] == NULL)
		{
			for (; a >= 0; a--)
				free(mes[a]);
			free(mes);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			mes[a][b] = 0;
	}

	return (mes);
}
