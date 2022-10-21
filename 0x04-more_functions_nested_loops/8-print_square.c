#include "main.h"

/**
 * print_square - print a square followed by a new line
 * @size: is the size of the sqare
 * Return: A square #
 */
void print_square(int size)
{
	int times, square;

	if (size <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (times = 0; square < size; times++)
		{
			for (square = 0; square < size; square++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	}
}
