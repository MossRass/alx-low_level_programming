#include <stdio.h>

/**
 * main - prints the name of the program
 * @argc: int
 * @argv: array
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
