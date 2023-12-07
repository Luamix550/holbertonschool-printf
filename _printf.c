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
    va_list list;

    if (format == NULL || buffer == NULL)
        return (-1);
    va_start(list, format);
    if (!correct_printf(format, buffer))
        exit(1);
    for (; format[i] != '\0'; i++)
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
            counter = f(&buffer[counter], counter, list);
            i++;
            }
            else if (format[0] == '%' && format[1] == '\0')
                return (-1);
        }
        else
        {
            buffer[counter] = format[i];
            counter++;
        };
    }
    write(1, buffer, counter);
    free(buffer);
    va_end(list);
    return (counter);
}