#include "main.h"
/**
 * _isupper - returns uppercase character
 * Return: result
 * @c: character
 */
int _isupper(int c)
{
	if (c >= 'A' && c >= 'Z')
		return (0);
	else
		return (1);
}
