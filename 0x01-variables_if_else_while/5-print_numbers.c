#include <stdio.h>
/**
 * main - entry point: print numbers from 0 - 9
 *
 * Return: 0 = success
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");
	return (0);
}
