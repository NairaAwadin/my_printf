/*
** EPITECH PROJECT, 2022
** modulo_s.c
** File description:
** modulo s.c
*/

#include "my.h"

int modulo_s(char const *str)
{
    int i = 0;
    while (str[i] != '\0') {
        if ( str[i] <= 32 || str[i] >= 127) {
            my_putchar('\\');
            my_octal(str[i]);
        } else {
            my_putchar(str[i]);
        }
        i++;
    }
}
