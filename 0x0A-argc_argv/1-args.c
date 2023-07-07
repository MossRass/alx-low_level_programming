#include <stdio.h>
#include "main.h"

/**
 * main - print the number of arguments passed
 * @argc: number of commandline arguments
 * @argv: array of commandline arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	printf("%d\n", argv - 1 __attribute__((unused)));

	return (0);
}