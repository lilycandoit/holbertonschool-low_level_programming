#include "main.h"

/**
 * jack_bauer - prints the every minute of the day
 *
 * Description: print every minute of the day
 *
 * Return: void
 *
 */


void jack_bauer(void)
{
	int h, min;

	h = 0;
	while (h < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}

		h++;
	}
}
