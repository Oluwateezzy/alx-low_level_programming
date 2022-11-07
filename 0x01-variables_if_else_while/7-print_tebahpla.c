#include <stdio.h>
/**
 * main - entry point: print alphabets in reverse
 *
 * Return: 0 if succeed
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
