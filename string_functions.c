#include "main.h"

/**
 * print_chr - Print a character.
 * @buffer: Printf string content.
 * @counter: Count of arguments.
 * @list: Number for the list of arguments.
 * Return: 0.
 */
int print_chr(char *buffer, int counter, va_list list)
{
	buffer[0] = va_arg(list, int);
	counter++;
	return (counter);
}

/**
 * print_str - Print a string.
 * @buffer: String buffer.
 * @counter: Count of strings.
 * @list: va_list argument.
 * Return: Length to print.
 */
int print_str(char *buffer, int counter, va_list list)
{
	char *s;
	int i = 0;

	s = va_arg(list, char *);
	if (s == NULL)	
	s = "(null)";

	while (s[i] != '\0')
	{
		buffer[i] = s[i];
		i++;
		counter++;
	}
return (counter);
}

/**
 * print_mod - Print '%' character.
 * @buffer: Character buffer.
 * @counter: Counter for string.
 * @list: va_list arguments.
 * Return: Length of the string.
 */
int print_mod(char *buffer, int counter, va_list __attribute__((unused)) list)
{
	buffer[0] = '%';
	counter++;
	return (counter);
}

/**
 * _strlen - Calculate the length of a string.
 * @str: The input string.
 * Return: The length of the string.
 */
int _strlen(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)

	return (i);
}

/**
 * _strchr - Find the index of the first occurrence of '%'.
 * @format: The input string to search.
 * Return: The index of the first '%' character, or -1 if not found.
 */
int _strchr(char *format)
{
	int i = 0;

	for (; i < _strlen(format); i++)
	{
		if (format[i] == '%')
	{
	return (i);
	}
	}
	return (-1);
}
