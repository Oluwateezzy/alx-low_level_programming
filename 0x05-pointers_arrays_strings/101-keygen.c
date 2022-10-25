#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random password
 * Return: 0
 */
int main(void)
{
	int i, r;
	time_t t;

	i = 0;
	r = 0;
	srand((unsigned int) time(&t));
	while (c < 2772)
	{
		r = rand() % 128;
		if ((c + r) > 2772)
			break;
		c = c + r;
		printf("%c", r);
	}
	printf("%c\n", (2772 - c));
	return (0);
}
