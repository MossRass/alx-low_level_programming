#include "main.h"

/**
 * print_alphabet  - print_alphabet_x10
 *
 * description: alphabet a to z
*/
void print_alphabet(void)
{
	char alphabet;
	int line;

	for (line  = 1 ; line <= 10 ; line++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
			_putchar(alphabet);
	}
	_putchar('\n');
}
