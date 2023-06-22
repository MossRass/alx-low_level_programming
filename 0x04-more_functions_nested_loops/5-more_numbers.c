#include "main.h"

/**
 * more_numbers - numbers, from 0 to 14
 */

void more_numbers(void)
{
	int line, nums;

	for (line = 1 ; <= 10 ; line++)
	{
		for (nums = 0 ; nums <= 14 ; nums++)
		{
			if (nums >= 10)
				_putchar('1');

			_putchar(nums % 10 + '0');
		}
		_putchar('\n');
	}
}
