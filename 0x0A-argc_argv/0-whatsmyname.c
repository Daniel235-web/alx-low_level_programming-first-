#include "main.h"
/**
 * main - program that prints its name, followed by a new line
 * @argc: argument count
 * @argv: argument vector pointing to a string
 * the _attribute_((used)) is useful here because we won't use the
 * argument count all, since this program only
 * prints the name of the prograM
 * Return: EXIT_SUCCESS
 */
int main(int __attribute__((unused))argc, char **argv)
{
	printf("%s\n", argv[0]);

	exit(EXIT_SUCCESS);
}
