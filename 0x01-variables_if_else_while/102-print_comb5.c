#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 when successful
 */

int main(void)
{
	int i, j;
	int a, b, c, d;

	for (i = 0; i < 100; i++)
	{
		a = i / 10; /* double fnum */
		b = i % 10; /* single fnum */

		for (j = 0; j < 100; j++)
		{
			c = j / 10; /* double snum */
			d = j % 10; /* single snum */

			if (a < c || (a == c && b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32);
				putchar(c + '0');
				putchar(d + '0');

				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}
		}
	}
	putchar(10);

	return (0);
}

