#include "main.h"

/**
 * count_words - calculates number of words in a str
 * @s: string
 * Return: number of words
 */
int count_words(char *s)
{
	int i, words = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (*s == 32)
		{
			s++;
		}
		else
		{
			for (; s[i] != 32 && s[i] != '\0'; i++)
			{
				s++;
			}
			words++;
		}
	}
	return (words);
}

/**
 * free_arg - frees the memory of args
 * @s: string to be freed
 * @i: counter
 * Return: void
 */
void free_arg(char **s, int i)
{
	while (i > 0)
	{
		free(s[--i]);
	}
	free(s);
}

/**
 * strtow - splits a string into words
 * @str: string to be splited
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int index = 0, sub_index = 0;
	int words_in_str = 0, len_word = 0;
	char **arr, *found_word;

	if (str == 0 || *str == 0)
		return (NULL);
	words_in_str = count_words(str);
	if (words_in_str == 0)
		return (NULL);
	arr = malloc((words_in_str + 1) * sizeof(char *));
	if (arr == 0)
		return (NULL);
	for (; *str != '\0' && index < words_in_str;)
	{
		if (*str == 32)
		{
			str++;
		}
		else
		{
			found_word = str;
		for (; *str != 32 && *str != '\0';)
		{
			len_word++;
			str++;
		}
		arr[index] = malloc((len_word + 1) * sizeof(char));
		while (*found_word != 32 && *found_word != '\0')
		{
			arr[index][sub_index] = *found_word;
			found_word++;
			sub_index++;
		}
		arr[index][sub_index] = '\0';
		index++;
		sub_index = 0;
		len_word = 0;
		str++;
		}
	}
	return (arr);
}
