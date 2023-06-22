#include "main.h"

/**
 * _isupper - entry point
 * @c: lettre to be checked
 * Return:1 if c is upper ,otherwise 0
 */

int _isupper(int c)
{
	int c;

	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
