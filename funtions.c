#include "main.h"
/**
 * select_funct - selection char
 * @arg: verification
 * Return: pointer for function
 */
int (*select_funct(char *arg))(char *, int, va_list)
{
    int i = 0;
    func_t form[] = {

        {"c", print_chr},
        {"s", print_str},
        {"%", print_mod},
        {NULL, NULL}
    };

    while (i < 3)
    {
        if (*arg == *(form[i]).ptr)
            return ((form[i].f));
        i++;
    }
    return NULL;
}

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

/**
 * correct_printf - correct output
 * @format: point argument base
 * @buffer: point long memory
 * Return: 0
 *
*/
int correct_printf(char *format, char *buffer)
{
    if (!format || !buffer)
        return (-1);
    else
        return (1);
}