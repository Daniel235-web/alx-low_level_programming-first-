#include <stdio.h>

/**
 * main -Entry point
 * Return: 0 when successful
 */

int main(void)
{
	char a_z;
	char A_Z;

	for (a_z = 97; a_z <= 122; a_z++)
	{
		putchar(a_z);
	}
	for (A_Z = 65; A_Z <= 90; A_Z++)
	{
		putchar(A_Z);
	}
	putchar('\n');
	return (0);
}
