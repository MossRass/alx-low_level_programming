#include "main.h"
/**
 * print_alphabet  - the alphabet, in lowercase
 *
 * description: alphabet a to z
*/
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
	{
		_putchar(alphabet);
	_putchar('\n');
	}
}

