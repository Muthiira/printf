#include "main.h"
#include <stdio.h>

/**
 * _printf - produces output according to format
 * @format: character string
 * Return: number of characters printed
 * (excluding the null byte used to end output to strings)
 */

int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
		return (-1);

	size = _strlen(format);
	if (size <= 0)
		return (0);

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}

