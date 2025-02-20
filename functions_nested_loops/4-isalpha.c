#include "main.h"

/**
 * _isalpha - Checks if a character is alpha.
 * @c: The character to check
 *
 * Description: Check if c is letter, lowercase or uppercase
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))

		return (1);
	return (0);
}
