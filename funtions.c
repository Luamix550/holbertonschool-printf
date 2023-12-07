#include "main.h"

int _strlen(const char *str)
{
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
    count--;
    return count;
}

int verify_string(const char *format, char *buffer)
{
    if (format != NULL && buffer != NULL) {
        return 1;
    }
    return 0;
}

int (*get_funct(const char *arg))(char *, int, va_list)
{
    int i = 0;
    funct_t form[] = {
        {"c", print_chr},
        {"s", print_str},
        {"%", print_mod},
        {NULL, NULL}
    };

    while (i < 4) {
        if (*arg == form[i].ptr[0]) {
            return form[i].f;
        }
        i++;
    }
    return NULL;
}

int print_str(char *buffer, int count, va_list args)
{
    char *s;
    int i = 0;

    s = va_arg(args, char *);

    while (i < _strlen(s)) {
        buffer[i] = s[i];
        i++;
    }
    count++;
    return count;
}

int print_chr(char *buffer, int count, va_list args)
{
    char c = va_arg(args, int);
    buffer[count] = c;
    count++;
    return count;
}

int print_mod(char *buffer, int count, va_list __attribute__((unused)) list)
{
    buffer[0] = '%';
    count++;
    return count;
}
