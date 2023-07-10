#include "main.h"
#include <stdlib.h>
/**
 * str_concat -  concatenates two strings
 * @s1: input one
 * @s2: input two
 * Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *con;
	int i, coni;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = coni = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[coni] != '\0')
		coni++;
	con = malloc(sizeof(char) * (i + coni + 1));

	if (con == NULL)
		return (NULL);
	i = coni = 0;
	while (s1[i] != '\0')
	{
		con[i] = s1[i];
		i++;
	}

	while (s2[coni] != '\0')
	{
		con[i] = s2[coni];
		i++, coni++;
	}
	con[i] = '\0';
	return (con);
}
