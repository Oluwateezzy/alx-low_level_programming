#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	long int first, second, i, next;

	first = 1;
	second = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (first != 20365011074)
		{
			printf("%ld, ", first);
		}
		else
		{
			printf("%ld\n", first);
		}
		next = first + second;
		first = second;
		second = next;
	}
	return (0);
}
