#include <stdio.h>
/**
 * _islower - check lower character
 *
 *@c: parameter c to be check
 *
 * Return: 1 if true else 0
 *
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
