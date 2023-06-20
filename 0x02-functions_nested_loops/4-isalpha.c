#include "main.h"

/**
 * _isalpha - entry point
 *
 * @c: the character to be checked
 *
 * Return 1 if lettre ,otherwise 0
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return(0);
}
