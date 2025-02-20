#include <stdio.h>

/**
 * main - Entry point to print single digit number of base 10
 *
 * Description: Uses a loop to print all digit 0-9
 * not using char variable
 * using putchar twice only
 * followed by a newline
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num=0;

	while (num <= 9)
	{
		putchar('0'+ num);
		num ++;
	}


	putchar('\n');

	return (0);
}
