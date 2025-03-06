#include "main.h"

/* function prototype */
int check_sqrt(int n, int x);

/**
* _sqrt_recursion - get the natural square root of a number
* @n: the number to be checked
* Return: Square root of n,
* or -1 if n has no natural square root
*/

int _sqrt_recursion(int n)
{
	/* check edge case of negative input */
	if (n < 0)
		return (-1);

	/* calling the recurse function from the helper */
	return (check_sqrt(n, 1));
}

/**
* check_sqrt - Recursively checks for the natural square root
* @n: The input number
* @x: Current number to be tested (answer)
* Return: The natural square root of n, or -1 if not found
*/
int check_sqrt(int n, int x)
{
	if (x * x > n)
		return (-1); /* no square root found */

	if (x * x == n)
		return (x); /* found the square root */

	/* incase x * x < n, keep trying the next number */
	return (check_sqrt(n, x + 1));
}
