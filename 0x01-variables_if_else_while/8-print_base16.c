#include <stdio.h>

/**
 *main - entry point
 *
 * Description: digit numbers of base 16 in lowercase
 *
 * Return: alwyas 0 (success)
*/

int main(void)
{
	int num;
	int let;

	for (num = 0 ; 0 < 10 ; num++)
	{
		putchar(num);
	}
	for (let = 97 ; let < 102 ; let++)
	{
		putchar(let);
	}
	putchar('\n');
	return (0);
}
