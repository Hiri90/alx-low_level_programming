#include "main.h"

/**
 * jack_bauer - Print every minute of the day of Jack Bauer
 * Description: Start from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int g, h;

	for (g = 0; g < 24; g++)
	{
		for (h = 0; h < 60; h++)
		{
			_putchar((g / 10) + '0');
			_putchar((g % 10) + '0');
			_putchar(':');
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar('\n');
		}
	}
}
