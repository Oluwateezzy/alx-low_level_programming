#include "main.h"
/**
 * _strlen_recursion - length of a string
 * @s: string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
}
/**
 * is_palindrome - check if palindrome
 * @s: string parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (ispal(s, 0, i - 1));
}
/**
 * ispal - helper function
 * @str: address of string
 * @s: start index
 * @e: end index
 * Return: int
 */
int ispal(char *str, int s, int e)
{
	if (s >= e)
		return (1);
	if (str[s] != str[e])
		return (0);
	return (ispal(str, ++s, --e));
}
