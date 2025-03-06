#include "main.h"

/**
* _pow_recursion - get the value of x raised by power of y
* @x: the number to be valued
* @y: the number to give power of
*
* Return: value in integer
*/

int _pow_recursion(int x, int y)
{
	/* handle when y < 0 */
	if (y < 0)
		return (-1);


	/* hanlde when y = 0 */
	if (y == 0)
		return (1);

	/* recursive case: x^y = x * x6(y-1) */
	/* and keep going untill y = 0 */
	return (x * _pow_recursion(x, y - 1));
}
