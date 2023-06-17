#include <stdio.h>

/**
 *main - entry point
 *
 * Description: digit numbers of base 10
 *
 * Return: alwyas 0 (success)
*/
int main(void)
{
	char lt = 'z';

	while (lt >= 'a')
	{
		putchar(lt);
		lt--;
	}
	putchar('\n');
	return (0);
}
