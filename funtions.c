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

int (*get_funct(const char *arg))(char *, int, va_list)
{

	funct_t form[] = {
		/*{"c", print_chr},*/
        {"s", print_str},
		{NULL, NULL}
	};

    int i = 0;

    while (i < 3)
    {
        if (*arg == *(form[i]).ptr)
            return ((form[i].f));
        i++;
    }
    return (NULL);
}


int print_str(char *buffer, int count, va_list args)
{
    char *s;
    int i = 0;
    s = va_arg(args, char *);

    while (i <= _strlen(s))
    {
        buffer[i] = s[i];
        i++;
        count++;
    }
    return (count);
}
