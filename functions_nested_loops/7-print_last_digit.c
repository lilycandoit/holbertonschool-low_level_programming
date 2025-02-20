#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @n: The number to check
 * Description: last digit of a number
 *
 * Return: Return last digit of a number
 *
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
		last_digit = -last_digit;

	_putchar(last_digit + '0');

	return (last_digit);
}
