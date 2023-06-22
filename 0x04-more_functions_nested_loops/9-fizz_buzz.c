#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line
 * but for multiples of 3 prints Fizz instead of the number
 * and for the multiples of 5 prints Buzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (num % 3 == 0)
		{
			printf("Fizz ");
		} else if (num % 5 == 0)
		{
			printf("Buzz ");
		} else
		{
			printf("%d ", num);
		}
	}
	putchar('\n');

	return (0);
}
