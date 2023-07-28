/*
** EPITECH PROJECT, 2022
** my_printf.c
** File description:
** printf
*/

#include "my.h"

int my_printf(const char *format, ...)
{
    va_list list;
    va_start(list, format);
    for (int a = 0; format[a] != '\0'; a++) {
        if (format[a] == '%')  {
            a++;
            my_switch_case(format, a, list);
            case_two(format, a, list);
            case_three(format, &a, list);
            case_plus(format, &a, list);
        } else {
            my_putchar(format[a]);
        }
        va_end(list);
    }
}
