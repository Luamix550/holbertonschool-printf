#include "main.h"

int _printf(const char *format, ...)
{
    char *buffer;
    int i = 0;
    int count = 0;
    va_list args;
    int (*f)(char *, int, va_list);


    buffer = malloc(2000);

    va_start(args, format);

    for (; i <= _strlen(format); i++)
    {
        if (format[i] == '%')
        {
            f = get_funct(&(format[i + 1]));
            if (f != NULL)
            {
                count = f(&buffer[count], count, args);
                i++;
            }
        }
        else {
        {
            buffer[count] = format[i];
            count++;
        }
        }
    }
    write(1, buffer, count);
    free(buffer);
    va_end(args);
    return (count);
}