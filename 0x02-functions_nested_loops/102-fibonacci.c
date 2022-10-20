#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int first, second, i, next;

	first = 1;
	second = 2;
	for (i = 0; i < 50; i++)
	{
		if (i <= 1)
			next = i;
		else
		{
			next = first + second;
			first = second;
			second = next;
		}
		printf("%d, ", next);
	}
	printf("\n");
	return (0);
}
