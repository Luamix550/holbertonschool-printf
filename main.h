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

int _strchr(const char *format);

int (*get_funct(const char *arg))(char *, int, va_list);

int program_closure(char *buffer, int counter, va_list args);

int _printf(const char *format, ...);

int _strlen(const char* str);

int verify_format(char arg);

int correct_printf(const char *format, char *buffer);


typedef struct funct
{
	char *ptr;
	int (*f)(char *, int, va_list); 

} funct_t;

int print_str(char *buffer, int count, va_list args);
int print_chr(char *buffer, int count, va_list args);
int print_mod(char *buffer, int count, va_list __attribute__((unused)) list);


#endif
