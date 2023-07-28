/*
** EPITECH PROJECT, 2022
** switch case +
** File description:
** %+
*/

#include "my.h"

int case_plus(const char *format, int *a, va_list list)
{
    switch (format[*a]) {
    case '+' :
        special_case(format, a, list);
        (*a)++;
        break;
    }
}

int special_case(const char *format, int *a, va_list list)
{
    switch (format[*a + 1]) {
    case 'd' :
        int res = va_arg(list, int);
        modulo_plus(res);
        my_put_nbr(res);
        break;

    case 'i' :
        int result = va_arg(list, int);
        modulo_plus(result);
        my_put_nbr(result);
        break;

    }
}
