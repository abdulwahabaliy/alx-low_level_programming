#include "main.h"

/**
 * _islower - function to prints lower case
 *
 * @c: parameter to be printed
 *
 * Return: returns 1 if 'c' is lowercase
 *         otherwise always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
