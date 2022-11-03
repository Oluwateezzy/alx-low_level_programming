#include "main.h"
/**
 * is_palindrome - check if palindrome
 * @s: string parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	int i = _strlen_recursion(s);

	return (ispal(s, 0, i - 1);
}
/**
 * ispal: helper function
 * @str: address of string
 * @s: start index
 * @e: end index
 * Return: bool
 */
int ispal(char *str, int s, int e)
{
	if (s >= e)
		return (1);
	if (str[s] != str[e])
		return (0);
	return (ispal(str, ++s, --e));
}
