#ifndef MAIN_H
#define MAIN_H

/*libraries*/
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

/*Struct*/
typedef struct funct
{
<<<<<<< HEAD
	char *ptr;
	int (*f)(char *, int, va_list); 

} funct_t;

int print_str(char *buffer, int count, va_list args);
int print_chr(char *buffer, int count, va_list args);
<<<<<<< HEAD
int print_mod(char *buffer, int count, va_list __attribute__((unused)) list);
=======
int print_mod(char *buffer, int counter, va_list __attribute__((unused)) list);
>>>>>>> d0a2f5f206e33df7e58bff9f6507f0790231f392

=======
    char *ptr;
    int (*f)(char *, int, va_list list);
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
>>>>>>> b5b29fd5627d5b890f5755cef2908007975338c4

#endif
