#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int first, second, i, first1, first2, second1, second2;

	first = 1;
	second = 2;
	printf("%lu", first);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", second);
		second = second + first;
		first = second - first;
	}
	first1 = first / 1000000000;
	first2 = first % 1000000000;
	second1 = second / 1000000000;
	second2 = second % 1000000000;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", second2 + (second2 / 1000000000));
		printf("%lu", second2 % 1000000000);
		second1 = second1 + first1;
		first1 = second1 - first1;
		second2 = second2 + first2;
		first2 = second2 - first2;
	}
	printf("\n");
	return (0);
}
