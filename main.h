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

/*prototypes*/
int _printf(char *format, ...); /*Prototype of _printf*/
int _putchar(char c);
int print_str(char *, int, va_list);
int print_chr(char *, int, va_list);
int _abs(int n);
char *_reverse(char *s, int n);
int _select(char *buffer, int counter, char *forma);
char *_itoa(int value, int base);
int print_int(char *buff, int count, va_list value);
int print_mod(char *, int, va_list __attribute__((unused)));
int correct_printf(char *, char*);
int (*select_funct(char *arg))(char *, int, va_list);
#endif
