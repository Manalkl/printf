#include "main.h"

/**
 * _Print_char - writes the character c
 *
 * @c: The character to print
 *
 * Return: always success 1.
 *
 * if  error, -1 is returned.
 *
 */
int _write_char(char c)
{
	return (write(1, &c, 1));
}
