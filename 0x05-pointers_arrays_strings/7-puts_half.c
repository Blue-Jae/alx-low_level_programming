#include "main.h"

/**
 * puts_half - prints half of a string.
 * @str: input string.
 * Return: void.
 */
void puts_half(char *str)
{
	int digit = 0, i;

	while (digit >= 0)
	{
		if (str[digit] == '\0')
			break;
		digit++;
	}

	if (digit % 2 == 1)
		i = digit / 2;
	else
		i = (digit - 1) / 2;

	for (i++; i < digit; i++)
		_putchar(str[i]);
	_putchar('\n');
}
