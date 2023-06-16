#include <stdlib.h>
#include "main.h"

/**
 * array_range - a pointer that creates an array of integers
 * @min: minimum range of stored values
 * @max: maximum range of stored values and the number of elements
 *
 * Return: pointer to new array
 */
int *array_range(int min, int max)
{
	int *ptr;
	int a, qntty;

	if (min > max)
		return (NULL);

	qntty = max - min + 1;

	ptr = malloc(sizeof(int) * qntty);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; min <= max; a++)
		ptr[a] = min++;

	return (ptr);
}
