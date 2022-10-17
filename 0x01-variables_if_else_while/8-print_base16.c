#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 when successful
 */

int main(void)
{
	int nums;
	int hex;

	for (nums = 48; nums <= 57; nums++)
	{
		putchar(nums);
	}
	for (hex = 97; hex <= 102; hex++)
	{
		putchar(hex);
	}
	putchar(10);
	return (0);
}
