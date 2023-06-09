#include "main.h"
#include <stdlib.h>
/**
 * create_array - Create array of char &  initializes it with a specific char.
 * @size: The size of the array.
 * @c: The character to initialize the array with.
 * Return: On success, returns a pointer to the array.
 *         If size is 0 or memory allocation fails, returns NULL.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);
	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
