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
int (*get_funct(const char *arg))(char *, int, va_list)
{
    int i = 0;
    funct_t form[] = {
        {"c", print_chr},
        {"s", print_str},
        {"%", print_mod},
        {NULL, NULL}
    };

    while (i < 3) {
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

int print_mod2(char *buffer, int count, va_list __attribute__((unused)) list)
{
    printf("ENTRO0");
    buffer[0] = '%';
    count++;
    return count;
}

int correct_printf(const char *format, char *buffer)
    {
    int percent_char = _strchr(format);

    if (!format || !buffer)
        {
        fprintf(stderr, "The value is NULL.\n");
        exit (0);
        }
    
    else if (format[percent_char] == '%' && verify_format(format[percent_char + 1]) == 1)
        {
            fprintf(stderr, "EL FORMATO INGRESADO ES INCORRECTO.\n");
            exit (0);
        }

    else
        {
        return (1);
        }

}

int verify_format(char arg)
{

if (arg == 's' || arg == 'c' || arg == '%' || arg == ' ')
    return (0);

else
    return (1);

}

int program_closure(char *buffer, int counter, va_list args){
    write (1, buffer, counter);
    free (buffer);
    va_end (args);
    return counter;
}

int _strchr(const char *format) {
    int i = 0;

    for (; i < _strlen(format); i++) {
        if (format[i] == '%') {
            return i;
        }
    }
    return -1;
}