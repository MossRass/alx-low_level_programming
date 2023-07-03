#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory location
 *@src: memory source
 *@n: num of bytes
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int itr = 0;
	int i = n;

	for (; itr < i; itr++)
	{
		dest[itr] = src[itr];
		n--;
	}
	return (dest);
}
