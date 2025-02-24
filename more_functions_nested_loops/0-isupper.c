#include "main.h"

/**
 * _isupper - check if chatacter is uppercase
 *
 * @c: Character to check
 *
 * Description: Check if the character is uppercase
 *
 * Return: Return 1 if uppercase or 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
