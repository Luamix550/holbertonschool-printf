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

typedef struct funct
{
	char *ptr;
	int (*f)(char *, int);
} funct_t;
int (*get_funct(const char *arg))(*f)(char *, int, va_list)

int _printf(const char *format, ...);

int _strlen(const char* str);

int verify_string(const char *format, char *buffer);

char *my_itoa(int num, char *str);

#endif
