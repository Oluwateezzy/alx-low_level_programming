#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - generate random password
 * Return: 0
 */
int main(void)
{
	int i;
	char list[] = "1234567890qwertyuiopasdfghjklzxcvbnm!@#$%^&*()_- +=QWERTYUIOPASDFGHJKLZXCVBNM[]{};':\"<>,.?/\|";
	srand(time(NULL));
	for (i = 0; i < 10; i++)
	{
		printf("%c", list[rand() % (sizeof list - 1)]);
	}
	printf("\n");
	return (0);
}
