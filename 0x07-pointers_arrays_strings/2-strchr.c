#include "main.h"

/**
 * _strchr - function that locates a character
 *
 * @s: string to be searched
 * @c: character to be search for
 * Return: pointer to first occurrence of c if it's there or NULL otherwise
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
		{
			return (s);
		}
	} while (*s++);
	return (NULL);
}
