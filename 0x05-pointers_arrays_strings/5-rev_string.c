#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: input string.
 * Return: void.
 */
void rev_string(char *s)
{
	int digit = 0, i, j;
	char *str, temp;

	while (digit >= 0)
	{
		if (s[digit] == '\0')
			break;
		digit++;
	}
	str = s;

	for (1 = 0; i < (digit - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(str +j);
			*(str +j) = *(str + (j - 1));
			*(str + (j - 1)) = temp;
		}
	}
}
