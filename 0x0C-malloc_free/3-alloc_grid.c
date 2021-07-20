#include <stdlib.h>
/**
 * alloc_grid - allocates space for a 2d array
 * @width: width of array
 * @height: height of array
 *
 * Return: pointer to array or NULL if failed
 */
int **alloc_grid(int width, int height)
{
int i, j;
int **p = (int **)malloc(sizeof(int *) * width);
if (p == NULL)
{
return (NULL);
}
for (i = 0; i < width; i++)
{
p[i] = (int *)malloc(sizeof(int) * height);
if (p[i] == NULL)
{
return (NULL);
}
for (j = 0; j < height; j++)
{
*(p[i] + j) = 0;
}
}
return (p);
}
