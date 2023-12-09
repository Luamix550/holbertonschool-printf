#ifndef MAIN_H
#define MAIN_H
/*
 * File: main.h
 * Auth: Maria Alejandra Gonzalez - Luis Alfonso Diaz
 * Desc: Header file containing declarations for all functions
 *       used in the C - Printf.
 */
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>


int (*get_funct(const char *arg))(char *, int, va_list);

int _printf(const char *format, ...);

int _strlen(const char* str);

int verify_string(const char *format, char *buffer);


typedef struct funct
{
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


#endif
