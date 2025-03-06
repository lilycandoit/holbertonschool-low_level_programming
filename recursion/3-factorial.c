#include "main.h"

/**
* factorial - get the factorial of a given number
*
* @n: the given number
*
* Return: an integer
*/

int factorial(int n)
{
	/* base case: hanlde negative num */
	if (n < 0)
		return (-1);
	/* base case: handle factorial of 0 */
	if (n == 0)
		return (1);

	/* recursise call */
	return (n * factorial(n - 1));
}
