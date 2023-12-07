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

    printf("\nLINEA 17\n");
    for (; i <= _strlen(format); i++)
    {
        if (format[i] == '%')
        {
            printf("\nLINEA 22\n");
            f = get_funct(&(format[i + 1]));
            if (f != NULL)
            {
                printf("\nLINEA 26\n");
                count = f(&buffer[count], count, args);
                i++;
            }
        }
        else {
        {
            printf("\nLINEA 33\n");
            buffer[count] = format[i];
            count++;
        }
        }
    }
    printf("\nLINEA 39\n");
    write(1, buffer, count);
    printf("\nLINEA 41\n");
    free(buffer);
    va_end(args);
    return (count);
}