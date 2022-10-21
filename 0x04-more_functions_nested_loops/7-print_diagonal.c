#include "main.h"

/**
 * print_diagonal - draws adiagonal line
 * @n: numbers of '\' to be printed
 */
void print_diagonal(int n)
{
	int times, diag;

	if (n <= 0)
	{
		_putchar(10);
	}
	else
	{
		for (times = 0; times < n; times++)
		{
			for (diag = 0; diag < times; diag++)
			{
				_putchar(' ');
			}

			_putchar('\\');
			_putchar(10);
		}
	}
}
