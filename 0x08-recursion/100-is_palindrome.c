#include "main.h"

int check(char *s, int i, int len);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check(s, 0, _strlen_recursion(s)));
}

/**
 * _strlen_recursion - give the length of a string
 * @s: string to calculate the length
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * check_pal - checks the characters recursively for palindrome
 * @s: string to check
 * @i: iterator
 * @len: length of the string
 *
 * Return: 0 or 1
 */
int check(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check(s, i + 1, len - 1));
}
