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
			if (num != num2 && num < num2)
			{
				putchar(num);
				putchar(num2);
				if (num2 == 57 && num == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
