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

while (i < 5)
{
if (*arg == *(form[i]).character)
return ((form[i].function));
i++;
}
return (NULL);
}

/**
 * program_closure - Performs program closure operations.
 * @buffer: Pointer to the output buffer.
 * @counter: Counter for the number of characters written.
 * @args: Variable arguments list.
 * Return: returns characters.
 */
int program_closure(char *buffer, int counter, va_list args)
{
write(1, buffer, counter);
free(buffer);
va_end(args);
return (counter);
}

/**
 * _select - assignation the arguments
 * @buffer: memory espace
 * @counter: count
 * @forma: pointer string
 * Return: counter
*/
int _select(char *buffer, int counter, char *forma)
{
int i = 0;

while (forma[i])
{
buffer[i] = forma[i];
counter++;
i++;
}
return (counter);
}

/**
 * correct_printf - Checks if the format and buffer strings are not NULL.
 * @format: The format string to be verified.
 * @buffer: The buffer string to be verified.
 * Return: 1 if both strings are valid, 0 if either is NULL.
 */

int correct_printf(char *format, char *buffer)
{
if (!format || !buffer)
return (0);
else
return (1);
}
