#include "main.h"

int _strlen(char *str){
    int i = 0;

    for (; str[i] != '\0'; i++){}

    return (i);
}