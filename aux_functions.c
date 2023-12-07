#include "main.h"
/**
 * select_funct - selection char
 * @arg: verification
 * Return: pointer for function
 */
int (*select_funct(char *arg))(char *, int, va_list)
{
    int i = 0;
    func_t form[] = {

        {"c", print_chr},
        {"s", print_str},
        {"%", print_mod},
        {NULL, NULL}
    };

    while (i < 3)
    {
        if (*arg == *(form[i]).ptr)
            return ((form[i].f));
        i++;
    }
    return NULL;
}

int correct_printf(char *format, char *buffer){

    if (!format || !buffer)
        return -1;
    else
        return 0;
}

int program_closure(char *buffer, int counter, va_list args){
    /*buffer[counter] = '\0';*/
    write (1, buffer, counter);
    free (buffer);
    va_end (args);
    return counter;
}