#include <stdio.h>
/**
 * main - entry point
 * Return: void
 */
int main(void)
{
	int c;
	long n;

	c = 2;
	n = 612852475143;
	while (n > 1)
	{
		if (n % c == 0)
		{
			n /= c;
		}
		else
			c++;
	}
	printf("%d\n", c);
	return (0);
}
