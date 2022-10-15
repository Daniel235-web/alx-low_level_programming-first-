#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: to print alphabet
 * Return: Always 0
 **/
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar(ch);
	return (0);
}
