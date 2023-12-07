#include "main.h"

int _strlen(const char *str)
{
    int count = 0;
    while (*str != '\0') {
        count++;
        str++;
    }
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
    printf("\nLINEA 23 func.c\n");
    funct_t form[] = {
        {"c", print_chr},
        {"s", print_str},
        {"%", print_mod},
        {NULL, NULL}};

    int i = 0;

    while (i < 4) {
        printf("\nLINEA 33 func.c\n");
        if (*arg == *(form[i]).ptr)
            return ((form[i].f));
        i++;
    }
    return (NULL);
}

int print_str(char *buffer, int count, va_list args)
{
    printf("\nLINEA 42 func.c\n");
    char *s;
    int i = 0;
    s = va_arg(args, char *);
    
    for (; i < _strlen(s); i++) {
    buffer[i] = s[i];
    count++;
}
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
    buffer[count] = '%';
    count++;
    return count;
}
