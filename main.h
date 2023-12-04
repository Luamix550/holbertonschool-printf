#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);

int _strlen(const char* str);

int verify_string(const char *format, char *buffer);

#endif
