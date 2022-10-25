#include "main.h"

/**
 * puts2 - prints one character ot of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int len = 0;

	int i;

	while (*(str + len) != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i += 2)
	{
		_putchar(*(str + 1));
	}
	_putchar('\n');
}
