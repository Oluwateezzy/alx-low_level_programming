#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */
int main(void)
{
	int ch;

	for (ch = 48; ch <= 57; ch++)
	{
		putchar(ch);
		if (ch == 57)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
