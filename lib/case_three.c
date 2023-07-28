/*
** EPITECH PROJECT, 2022
** switch_case3
** File description:
** case_3
*/

#include "my.h"

int case_three(const char *format, int *a, va_list list)
{
    switch (format[*a]) {
    case 'S':
        modulo_s(va_arg(list, char *));
        break;
    case '#':
        case_four(format, a, list);
        (*a)++;
        break;
    }
}

int case_four(const char *format, int *a, va_list list)
{
    switch (format[*a + 1]) {
    case 'o':
        int x = va_arg(list, int);
        hash_octa(x);
        break;
    case 'x':
        int y = va_arg(list, int);
        hash_hexa_min(y);
        break;
    case 'X':
        int z = va_arg(list, int);
        hash_hexa_maj(z);
        break;
    }
}
