#include "main.h"
/**
 * _printf - Custom printf function
 * @format: Format string
 * Return: Number of characters printed (excluding null byte)
 */
int _printf(char *format, ...)
{
    int i = 0, counter = 0;
    int (*function)(char *, int, va_list);
    char *buffer = malloc(2000);
    va_list args;
    va_start(args, format);
    if (!correct_printf(format, buffer))
        return (-1);
    for (; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            buffer[counter] = format[i];
            counter++;
        }
        else if (format[i] == '%' && !verify_format(format[i + 1]))
        {
            function = select_funct(&(format[i + 1]));
            if (function != NULL)
            {
                counter = function(&buffer[counter], counter, args);
                i++;
            }
            else
            {
                buffer[counter] = '%';
                counter++;
            }
        }
        else
        {
            buffer[counter] = format[i];
            counter++;
        };
    }
    program_closure(buffer, counter, args);
    return (counter);
}
