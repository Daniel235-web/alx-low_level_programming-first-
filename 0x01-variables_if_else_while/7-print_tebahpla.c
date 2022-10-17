#include <stdio.h>
/**
 * main - Entry path
 * Return: 0 when succesful
 */

int main(void)
{
	char a_z;

	for (a_z = 122; a_z >= 97; a_z--)
	{
		putchar(a_z);
	}
	putchar(10);
	return (0);
}
