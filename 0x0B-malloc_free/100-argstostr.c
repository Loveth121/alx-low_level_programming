#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of the program.
 * @ac: The argument count.
 * @av: Array of argument strings.
 *
 * Return: Pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, j, total_len = 0;
	int k = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	/* Calculate the total length of the arguments */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			total_len++;
		total_len++; /* Account for the newline character */
	}

	str = malloc((total_len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	/* Copy the arguments to the concatenated string */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			str[k++] = av[i][j];
		str[k++] = '\n'; /* Add the newline character */
	}

	str[k] = '\0'; /* Add the null terminator */

	return (str);
}
