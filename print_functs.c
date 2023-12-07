#include "main.h"

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
    while (i < _strlen(s))
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
