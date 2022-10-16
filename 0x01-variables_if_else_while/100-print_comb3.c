#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0 = success
 */
int main(void)
{
	int num, num2;

	for (num = 0; num <= 9; num++)
	{

		for (num2 = 0; num <= 9; num2++)
		{
			putchar((num % 10) + '0');
			putchar((num2 % 10) + '0');

			if ((num == 9) && (num2 == 9))
			{
				continue;
			}

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
