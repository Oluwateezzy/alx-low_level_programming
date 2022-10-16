#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */
int main(void)
{
	int num, num2;

	for (num = 48; num < 58; num++)
	{
		for (num2 = 49; num2 < 58; num2++)
		{
			putchar(num);
			putchar(num2);
			if (num == 57 && num2 == 56)
				break;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
