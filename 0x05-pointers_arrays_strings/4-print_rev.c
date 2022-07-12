#include "main.h"

/**
 * print_rev - prints a string, in reverse order, followed by a new line.
 * @s: input string.
 * Return: void.
 */
void print_rev(char *s)
{
	int digit = 0;

	while (digit >= 0)
	{
		if (s[digit] == '\0')
			break;
		digit++;
	}

	for (digit--; digit >= 0; digit--)
		_putchar(s[digit]);
	_putchar('\n');
}
