#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * print_tab - Prints an array of string
 * @tab: The array to print
 *
 * Return: nothing
 */
void print_tab(char **tab)
{
	int i;

	for (i = 0; tab[i] != NULL; ++i)
	{
		printf("%s\n", tab[i]);
	}
}
/**
 * count_words - Counts the number of words in a string
 * @str: The string to count words in
 *
 * Return: The number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}

/**
 * strtow - Splits a string into an array of words
 * @str: The string to split
 *
 * Return: An array of words
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n;

	n = count_words(str);
	if (n == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (n + 1));
		if (words == NULL)
			return (NULL);

	for (i = 0, j = 0; i < n; ++i)
	{
		while (str[j] == ' ')
			++j;

		k = j;
		while (str[j] != ' ' && str[j] != '\0')
			++j;

		words[i] = malloc(sizeof(char) * (j - k + 1));
		if (words[i] == NULL)
		{
			for (--i; i >= 0; --i)
				free(words[i]);
			free(words);
			return (NULL);
		}

		memcpy(words[i], &str[k], j - k);
		words[i][j - k] = '\0';
	}

	words[n] = NULL;
	return (words);
}


/**
 * main - check the code for ALX School students.
 *
 * Return: 1 if an error occurred, 0 otherwise
 */
int main(void)
{
	char **tab;
	tab = strtow("  ALX School        #cisfun   ");
	if (tab == NULL)
	{
		printf("Failed\n");
		return (1);
	}
	print_tab(tab);
	return (0);
}
