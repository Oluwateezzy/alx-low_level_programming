#include "main.h"
/**
 * times_table - multiplication table 9
 *
 * Return: void
 */
void times_table(void)
{
	int r, c, mult;

	for (r = 0; r < 10; r++)
	{
		for (c = 0; c < 10; c++)
		{
			mult = r * c;

			if (c == 0)
			{
				_putchar('0');
			}
			else if (mult < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + 48);
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + 48);
				_putchar((mult % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
