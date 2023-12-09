#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>

/*Struct*/
/**
 * struct funct - structure to access the formats
 * @character: character
 * @function: pointer to function
*/
typedef struct funct
{
char *character;
int (*function)(char *, int, va_list list);
} func_t;

/*prototypes*/
int _printf(char *format, ...);

/*String functions*/
int print_str(char *, int, va_list);
int print_chr(char *, int, va_list);
int print_mod(char *buffer, int counter, va_list __attribute__((unused)));

/*Aux functions*/
int correct_printf(char *, char*);
int (*select_funct(char *arg))(char *, int, va_list);
int program_closure(char *buffer, int counter, va_list args);
int _select(char *buffer, int counter, char *forma);
int verify_format(char v);

/*String fuctions*/
int _strchr(char *format);
int _strlen(char *str);

/*Number functions*/
int print_int(char *buffer, int counter, va_list list);
char *_itoa(int list, int base);
char *_reverse(char *s, int n);
int _abs(int n);

#endif
