#include "main.h"
/**
 * is_palindrome - check if palindrome
 * @s: string parameter
 * Return: int
 */
int is_palindrome(char *s)
{
	if (s == "")
		return (1);
	char[] ch = _puts_recursion(*s);
	char[] rev_ch = _print_rev_recursion(*s);
	int i, flag;

	flag = 0;
	for (i = 0; ch[i] != '\n'; i++)
	{
		if (ch[i] == rev_ch[i])
			flag = 1;
		else
		{
			flag = 0;
			break;
		}
	}
	return (flag);
}
