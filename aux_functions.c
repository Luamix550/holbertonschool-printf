#include "main.h"
/**
 * select_funct - selection char
 * @arg: verification
 * Return: pointer for function
 */
int (*select_funct(char *arg))(char *, int, va_list)
{
    int i = 0;
    func_t form[] = 
    {
        {"i", print_int},
        {"d", print_int},
        {"c", print_chr},
        {"s", print_str},
        {"%", print_mod},
        {NULL, NULL}
    };

    while (i < 3)
    {
        if (*arg == *(form[i]).character)
            return ((form[i].function));
        i++;
    }
    return NULL;
}

/**
 * program_closure - Performs program closure operations.
 * @buffer: Pointer to the output buffer.
 * @counter: Counter for the number of characters written.
 * @args: Variable arguments list.
 * @Return: returns the counter of characters written.
 */
int program_closure(char *buffer, int counter, va_list args)
{
    write (1, buffer, counter);
    free (buffer);
    va_end (args);
    return counter;
}
