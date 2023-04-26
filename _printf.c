#include "main.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * _printf - print all.
 * @format:  string.
 *
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
	int printed_chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_string},
		{"%", print_percent},
		{"d", print_integer},
		{"i", print_integer},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	/*Calling parser function*/
	printed_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (printed_chars);
}
/**
 * print_S - prins string
 * 
 * @str: string to print
 * 
 * Return: number of characters printed
 */
int print_S(char *str)
{
	int i, count = 0;
	for (i = 0; str[i] != '\0'; i++)
    {
	    if (str[i] < 32 || str[i] >= 127)
	{
		count += printf("\\x%02X", str[i]);
	}
	else
	{
		count += putchar(str[i]);
	}
    }
	return (count);
}
