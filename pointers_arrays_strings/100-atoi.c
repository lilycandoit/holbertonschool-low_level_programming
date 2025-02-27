#include "main.h"
#include <limits.h>

/**
* _atoi - to convert a string into integer
* @s: the string to be converted
*
* Description: check all conditions, step by step:
* ignore non-digit
* deal with negative or positive signs before number
* then, calculate digit number (converting from character to digit)
* ignore the rest of string after digit number found and calculated
*
* Return: the digit number converted from the string
*/


int _atoi(char *s)
{
	int result = 0; /* the result after converting */
	int sign = 1; /* initialize for positive number */
	int found_number = 0; /* false, number is not found initially */

	/* iterate through the string using */
	/* can use *s instead  of s[i] for more readable and eficiency */
	while (*s)
	{
		/* step 1: check for '-' or '+' and get final sign*/
		if (*s == '-')
		{
			sign = sign * (-1);
		}
		/* then, check if it is digit number and convert it */
		else if (*s >= '0' && *s <= '9')
		{
			found_number = 1; /* number is found now - will be used for next step */
			/* prevent overflow with min and max integer */
			if (result > (INT_MAX / 10) ||
					(result == INT_MAX / 10 && (*s - '0') > (INT_MAX % 10)))
			{
				return (sign == 1) ? (INT_MAX) : (INT_MIN);
			}

			/*
			 * convert character to digit,
			 * result will be acculmulated for next character
			 * */
			result = (result * 10) + (*s - '0');
		}
		else if (found_number)
		{
			break; /* to ignore the rest after finding the 1st block of digits */
		}
		s++; /* move to next character */
	}

	return (result * sign);
}
