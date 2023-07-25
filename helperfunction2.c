#include "shell.h"

/**
 * _atoi - convert a number in a string to an integer
 *
 * @s: String to be converted
 *
 * Return: converted integer OR 0 if none
 */

int _atoi(char *s)
{
	int sign_cache = 1;
	int result = 0;

	while (s[0] != '\0')
	{
		if (s[0] == '-')
			sign_cache *= -1;
		else if (s[0] >= '0' && s[0] <= '9')
			result = (result * 10) + (s[0] - '0') * sign_cache;
		else if (result)
			break;

		s++;
	}

	return (result);
}

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 *
 * Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _strdup - this function duplicates a given string
 * @str: main string to be examined
 *
 * Return: a pointer to a character
 */
char *_strdup(const char *str)
{
	size_t f, g;
	char *ptr;

	f = 0;
	g = 0;
	if (str == NULL)
		return (0);
	while (str[f] != '\0')
		f++;
	ptr = malloc(sizeof(char) * (f + 1));
	if (ptr == NULL)
		return (NULL);
	while (g < f)
	{
		ptr[g] = str[g];
		g++;
	}
	ptr[g] = '\0';
	return (ptr);
}

/**
 * *_strchr - locates a character in a string
 *  @s: string
 *  @c: character being searched for
 *  Return: Returns NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');
	return (NULL);
}

/**
 * _memcpy - a function that copies memory area
 * @dest: a pointer to destination area
 * @src: a pointer to source area
 * @n: number of bytes to be copied
 *
 * Return: Returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
