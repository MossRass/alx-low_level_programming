#include "main.h"
#include <stdlib.h>
/**
 * create_array - create array of char
 * @size: size of the array
 * @c: char to start
 * Description: create array of size size and assign char c
 * Return: pointer to array, or NULL
 *
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int num;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (num = 0; num < size; num++)
		str[num] = c;
	return (str);
}
