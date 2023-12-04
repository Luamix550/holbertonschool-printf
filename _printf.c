#include "main.h"

int _printf(const char *format, ...)
{
    char *buffer;
    int i = 0;
    int count = 0;

    size_t leng = _strlen(format);

    buffer = malloc(leng);

    if (!buffer)
    {
        return -1;
    }
    
    if (!verify_string(format, buffer))
    {
        exit(0);
    }

    for (; i < _strlen(format); i++)
    {
        if (format[i] != '%')
        {
            buffer[count] = format[i];
            count++;
        }
    }
    write(1, buffer, count);
    free(buffer);
    return (count);
}
