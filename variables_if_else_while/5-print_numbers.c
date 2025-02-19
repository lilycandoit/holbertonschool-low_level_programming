#include <stdio.h>

/**
 * main - Entry point to print single digit number of base 10
 *
 * Description: Uses a loop to print all digit 0-9
 * followed by a newline
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	char num;

	for (num = '0'; num <= '9'; num++)
		putchar(num);

	putchar('\n');

	return (0);
}
