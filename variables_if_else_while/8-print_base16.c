#include <stdio.h>

/**
 * main - Entry point to print single digit number of base 16
 *
 * Description: Uses a loop to print all digit base 16
 * using putchar three times only
 * followed by a newline
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{
	int num, last_num;
	char letter, last_letter;

	num = 0;
	last_num = 9;

	while (num <= last_num)
	{
		putchar('0' + num);
		num++;
	}

	letter = 'a';
	last_letter = 'f';
	while (letter <= last_letter)
	{
		putchar(letter);
		letter++;
	}


	putchar('\n');

	return (0);
}
