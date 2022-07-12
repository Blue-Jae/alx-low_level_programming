#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: input string.
 * Return: void.
 */
void _puts(char *str)
{
	int digit = 0;

	while (digit >= 0)
	{
		if (str[digit] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[digit]);
		digit++;
	}
}
