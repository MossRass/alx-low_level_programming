#include "main.h"

/**
 * print_alphabet_x10  - print_alphabet_x10
 *
 * Description: print alphabet 10 times.
*/
void print_alphabet_x10(void)
{
	char alphabet;
	int line;

	for (line  = 1 ; line <= 10 ; line++)
	{
		for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
