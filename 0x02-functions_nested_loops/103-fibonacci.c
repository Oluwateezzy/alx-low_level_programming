#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int first, second, next, sum;

	sum = 0;
	first = 1;
	second = 2;
	for (i = 1; i <= 50; ++i)
	{
		if (first < 4000000 && first % 2 == 0)
		{
			sum = sum + first;
		}
		next = first + second;
		first = second;
		second = next;
	}
	printf("%lu\n", sum);
	return (0);
}
