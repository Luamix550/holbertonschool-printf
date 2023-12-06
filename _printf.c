#include "main.h"

int _printf(const char *format, ...)
{
    char *buffer;
    int i = 0;
    int count = 0;
    va_list args;
    int (*f)(char *, int, va_list);

    size_t leng = _strlen(format);

    buffer = malloc(leng);

    va_start(args, format);

    if (!verify_string(format, buffer))
    {
        exit(0);
    }

    for (; i <= _strlen(format); i++)
    {
        if (format[i] != '%')
        {
            buffer[count] = format[i];
            count++;
	}
    else if(format[i] == '%')
    {
        f = get_funct(&(format[i + 1]));
        if (f != NULL)
        {
            count = f(&buffer[count],count, args);
            i++;
        }
    }
    }
    write(1, buffer, count);
    free(buffer);
    va_end(args);
    return (count);
}