#include "main.h"

int _strlen(char *str){
    int i = 0;

    for (; str[i] != '\0'; i++){}

    return (i);
}

int _strchr(char *format) {
    int i = 0;

    for (; i < _strlen(format); i++) {
        if (format[i] == '%') {
            return i;
        }
    }
    return -1;
}