#include "main.h"

/* function prototype */
int check_prime(int n, int i);

/**
* is_prime_number - check if the input integer is prime number
*
* @n: the input number to be checked
*
* Return: return 1 if it is prime number
*/

int is_prime_number(int n)
{
	/* base cases */
	if (n <=
		 1)
		return (0);
	if (n == 2)
		return (1);

	/* if not base case, return value of the helper function */
	return check_prime(n, 2);
}

/**
* check_prime - a helper function to be called in main function
* @n: the given number to be check
* @i: the divisor to check if n is divisible
*
* Return: 1 if it is prime number
*/

int check_prime(int n, int i)
{
	/* if no divisors found, then it is prime number */
	if (i * i > n)
		return (1);
	/* if n is divisible by i, then it is NOT prime */
	if (n % i == 0)
		return (0);

	/* if none of the cases above, then keep calling function */
	/* to check with (i + 1) */
	return check_prime(n, i + 1);
}

