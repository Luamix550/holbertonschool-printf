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
<<<<<<< HEAD
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
=======
char *character;
int (*function)(char *, int, va_list list);
>>>>>>> a8d0ec7adadc9a84e0a335427b176d8a129d2e52
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


/*String fuctions*/
int _strchr(char *format);
int _strlen(char *str);
>>>>>>> b5b29fd5627d5b890f5755cef2908007975338c4

/*Number functions*/
int print_int(char *buffer, int counter, va_list list);
char *_itoa(int list, int base);
char *_reverse(char *s, int n);
int _abs(int n);


#endif
