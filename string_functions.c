#include "main.h"

/**
 * print_chr - the function name
 * @buffer: printf string content
 * @counter: count arg
 * @list: number for the list the arg the string
 * Return: 0
*/

int print_chr(char *buffer, int counter, va_list list)
{
	buffer[0] = va_arg(list, int);
	counter++;
	return (counter);
}
/**
 * print_str - print a string.
 * @buffer: string buf.
 * @counter: count string
 * @list: va_list arg
 * Return: long to print
*/

int print_str(char *buffer, int counter, va_list list)
{
	char *s;
	int i = 0;

	s = va_arg(list, char*);
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
* print_mod - print '%' character
* @buffer: character buf
* @counter: counter string
* @list: va_list arguments
* Return: long to string
*/

int print_mod(char *buffer, int counter, va_list __attribute__((unused)) list)
{
	buffer[0] = '%';
	counter++;
	return (counter);
}

int _strlen(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++){}

    return (i);
}

int _strchr(char *format)
{
    int i = 0;

    for (; i < _strlen(format); i++)
    {
        if (format[i] == '%')
        {
            return i;
        }
    }
    return -1;
}

int correct_printf(char *format, char *buffer)
{
    if (!format || !buffer)
        return 0;
    else
        return 1;
}