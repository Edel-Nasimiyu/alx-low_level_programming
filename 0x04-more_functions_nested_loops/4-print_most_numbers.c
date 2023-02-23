#include "main.h"

/**
 * print_most_numbers -  checks for checks for a digit (0 through 9).
 *
 * Return: Always 0.
 */
int _putchar(char a);
void print_most_numbers(void)
{
	int a = 0;

	for (a = 48; a < 58; a++)
	{
		if ( a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a);
			}
		}
	}
	_putchar('\n');
}
