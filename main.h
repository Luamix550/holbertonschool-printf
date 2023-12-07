#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct funct
{
    char *ptr;
    int (*f)(char *, int, va_list list);
} func_t;


int program_closure(char *buffer, int counter, va_list args);
int _strlen(char *str);
/*prototypes*/
int _printf(char *format, ...); /*Prototype of _printf*/
int _putchar(char c);
int print_str(char *, int, va_list);
int print_chr(char *, int, va_list);
int print_int(char *buff, int count, va_list args);
int print_mod(char *, int, va_list __attribute__((unused)));
int correct_printf(char *, char*);
int (*select_funct(char *arg))(char *, int, va_list);
#endif
