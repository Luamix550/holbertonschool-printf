#include "main.h"

int _strlen(const char* str)
{

int count = 0;

while (*str != '\0')
{
    count++;
    str++;
}
return (count);
}


int verify_string(const char *format, char *buffer)
{
    if (format != NULL || buffer != NULL)
    {
        return (1);
    }
    return (0);
}
