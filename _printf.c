#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * _print - that prints anything.
 * @format: is a character string.
 * Return: the number of characters printed.
 */
int _printf(const char *format, ...)
{
	unsigned int i = 0;
	va_list arg;
	char *str;
	int argument;

	va_start(arg, format);

	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				argument = printf("%c\n", va_arg(arg, int) - 1);
				return (argument);
				break;
			case '%':
				argument = printf("%%\n", va_arg(arg, int) - 1);
				return (argument);
				break;
			case 's':
				str = va_arg(arg, char *);
				argument = printf("%s\n", str);
				return (argument - 1);
				break;

			default:
				i++;
				break;
		}
		i++;
	}
	return (format[i]);
	printf("\n");
	va_end(arg);
}
