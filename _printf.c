#include "main.h"
/**
* _printf - function printf
* @format: string format
* Return: print value chars
*/
int _printf(char *format, ...)
{
    int i = 0, counter = 0;

    int (*f)(char *, int, va_list);
    char *buffer = malloc(2000);

    va_list args;
    va_start(args, format);

    if (correct_printf(format, buffer))
        return (-1);

    for (; i < _strlen(format); i++)
    {
        if (format[i] != '%')
        {
            buffer[counter] = format[i];
            counter++;
        }
        else if (format[i] == '%')
        {
            f = select_funct(&(format[i + 1]));
            if (f != NULL)
            {
            counter = f(&buffer[counter], counter, args);
            i++;
            }
            else if (format[i] == '%' && format[i + 1] == '\0')
            {
                return -1;
            }
            else {
                buffer[counter] = format[i];
                counter++;
            }
        }
    }
    program_closure(buffer, counter, args);
    return (counter);
}