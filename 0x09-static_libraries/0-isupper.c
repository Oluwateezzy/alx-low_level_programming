#include "main.h"
/**
 * _isupper - returns uppercase character
 * Return: result
 * @c: character
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
