#include <stdio.h>
/**
 * main - entry point: print character from 0 - 9 using putchar
 *
 * Return: 0 = success
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
