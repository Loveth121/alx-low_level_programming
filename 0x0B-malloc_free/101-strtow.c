#include "main.h"
#include <stdlib.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
	int count = 0;
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
		i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	char **words;
	int word_count, i, j, k, len;

	if (str == NULL || *str == '\0')
		return (NULL);

	word_count = count_words(str);
	if (word_count == 0)
		return (NULL);

	words = malloc((word_count + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);

	i = 0;
	k = 0;
	while (str[i] != '\0')
	{
		if (str[i] != ' ')
		{
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++;
			len = j - i;
			words[k] = malloc((len + 1) * sizeof(char));
			if (words[k] == NULL)
			{
				for (j = 0; j < k; j++)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (j = 0; j < len; j++)
				words[k][j] = str[i++];
			words[k][j] = '\0';
			k++;
		}
		i++;
	}

	words[k] = NULL;

	return (words);
}
