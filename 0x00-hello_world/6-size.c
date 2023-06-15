#include <stdio.h>
/**
 *main - entry point
 *
 *Description: sizoff
 *
 *Return: Always 0 Success
*/
int main(void)
{
	printf("Size of a char: %d byte(s)", sizeof(char));
	printf("Size of an int: %d byte (s)", sizeof(int));
	printf("Size of a long int: %d byte(s)", sizeof(long int));
	printf("Size of a long long: %d bytes(s)", sizeof(long long));
	printf("Size of a float: %d byte(s)", szeof(float));

	return (0);
}
