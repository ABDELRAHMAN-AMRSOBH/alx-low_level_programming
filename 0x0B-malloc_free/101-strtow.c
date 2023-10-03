#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * dodge_space - skip spaces
 * @str: input
 * Return: string without space prefix
*/

char *dodge_space(char *str)
{
	while (*str == ' ')
		*str++;
	return (str);
}

/**
 * dodge_word - skip next word
 * @str: string
 * Return: string after dodged word
*/

char *dodge_word(char *str)
{
	while (*str != ' ' && *str != '\0')
		*str++;
	return (str);
}

/**
 * get_length - get length of next word
 * @str: string
 * Return: length of next word + 1 for null char
*/

int get_length(char *str)
{
	int length = 1;

	while (*str && *str != ' ')
	{
		length++;
		*str++;
	}
	return (length);
}

/**
* **strtow - function that splits a string into words.
* @str : pointer
* Return: Char
*/

char **strtow(char *str)
{
	int words = 0, word, length, index;
	char *copy = str;
	char **list;

	if (str == NULL || *str == '\0')
		return (NULL);
	while (*copy)
	{
		if (*copy != ' ')
		{
			words++;
			copy = dodge_word(copy);
		}
		copy = dodge_space(copy);
	}
	list = malloc(sizeof(list) * words);
	if (list == NULL)
		return (NULL);
	for (word = 0; word < words; word++)
	{
		index = 0;
		str = dodge_space(str);
		length = get_length(str);
		list[word] = malloc(sizeof(char) * length);
		if (list[word] == NULL)
		{
			for (word = word - 1; word >= 0; word--)
				free(list[word]);
			free(list);
			return (NULL);
		}
		while (*str != ' ' && *str != '\0')
			list[word][index++] = *str++;
		list[word][index] = '\0';
	}
	list[word] = NULL;
	return (list);
}
