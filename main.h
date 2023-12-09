#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

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

/*Print_functs*/
int print_str(char *, int, va_list);
int print_chr(char *, int, va_list);
int print_mod(char *, int, va_list __attribute__((unused)));

/*Auxiliar functs*/
int correct_printf(char *, char*);
int (*select_funct(char *arg))(char *, int, va_list);
int program_closure(char *buffer, int counter, va_list args);

/*String fucts*/
int _strchr(char *format);
int _strlen(char *str);

/*Number functs*/

int print_int(char *buffer, int counter, va_list list);
char *_itoa(int list, int base);
char *_reverse(char *s, int n);
int _abs(int n);


#endif
