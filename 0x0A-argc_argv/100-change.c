#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point: prints the minimum number of coin
 * to make change for an amount of money
 * Return: int
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int num_coin, cent;
	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	num_coin = 0;
	cent = atoi(argv[1]);
	while (cent != 0)
	{
		if (cent >= 25)
			cent = cent - 25;
		else if (cent >= 10)
			cent = cent - 10;
		else if (cent >= 5)
			cent = cent - 5;
		else if(cent >= 2)
			cent = cent - 2;
		else if (cent >= 1)
			cent = cent - 1;
		num_coin += 1;
	}
	printf("%d\n", num_coin);
	return (0);
}
