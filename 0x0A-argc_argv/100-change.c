#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * min_coin - find minimum of coin to make a given value
 * @coin: array of coins
 * @size_c: size of c
 * @num_try: number of try
 * Return: int
 */
int min_coin(int *coin, int size_c, int num_try)
{
	int i, res = INT_MAX;

	if (num_try == 0)
		return (0);
	for (i = 0; i < size_c; i++)
	{
		if (coin[i] <= num_try)
		{
			int sub_res = min_coin(coin, size_c, num_try - *(coin + i));

			if (sub_res != INT_MAX && sub_res + 1 < res)
				res = sub_res + 1;
		}
	}
	return (res);
}
/**
 * main - entry point: prints the minimum number of coin
 * to make change for an amount of money
 * Return: int
 * @argc: argument count
 * @argv: argument vector
 */
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		int result = min_coin(coins, 5, atoi(argv[1]));

		printf("%d\n", result);
		return (0);
	}
}
