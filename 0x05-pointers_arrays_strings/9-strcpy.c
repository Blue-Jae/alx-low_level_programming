#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src,
 * including the terminating null byte, to the
 * buffer pointed to by dest.
 * @dest: destination.
 * @src: source.
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int digit = 0;

	while (digit >= 0)
	{
		*(dest + digit) = *(src + digit);
		if (*(src + digit) == '\0')
			break;
		digit++;
	}
	return (dest);
}
