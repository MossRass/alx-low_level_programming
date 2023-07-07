#include <stdio.h>

/**
 * main - print the number of arguments passed
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argv - 1);

	return (0);
}
