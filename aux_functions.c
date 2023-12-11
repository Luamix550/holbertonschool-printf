#include "main.h"

/**
 * select_funct - Select a function based on the given character.
 * @arg: Character for selection.
 * Return: Pointer to a function.
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
 * program_closure - Perform program closure operations.
 * @buffer: Pointer to the output buffer.
 * @counter: Counter for the number of characters written.
 * @args: Variable arguments list.
 * Return: Number of characters.
 */
int program_closure(char *buffer, int counter, va_list args)
{
write(1, buffer, counter);
free(buffer);
va_end(args);
return (counter);
}

/**
 * _select - Assign the arguments to the buffer.
 * @buffer: Memory space.
 * @counter: Count.
 * @forma: Pointer string.
 * Return: Count after assignment.
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

if (format[0] == '%' && format[1] == '\0')
return (0);
else
return (1);
}

/**
 * verify_format - Verifies that only certain characters are received.
 * @v: The format character.
 * Return: 0 if 'v' is one of the specified characters, 1 otherwise.
 */
int verify_format(char v)
{
if (v == 'd' || v == 'i' || v == 's' || v == 'c' || v == '%')
return (0);
else
return (1);
}
