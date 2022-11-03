#include "main.h"
/**
 * is_palindrome - check if palindrome
 * @s: string parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	if (ispal(s, 0, i - 1))
		return (1);
	else
		return (0);
}
/**
 * ispal: helper function
 * @str: address of string
 * @s: start index
 * @e: end index
 * Return: bool
 */
bool ispal(char &str, int s, int e)
{
	if (s >= e)
		return (true);
	if (str[s] != str[e])
		return (false);
	return (ispal(str, ++s, --end));
}
