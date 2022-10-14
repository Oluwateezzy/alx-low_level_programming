#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */
int main(void)
{
	char num;

	for (num = '0'; num < ':'; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
