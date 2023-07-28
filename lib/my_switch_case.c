/*
** EPITECH PROJECT, 2022
** swtich1
** File description:
** case 1
*/

#include "my.h"

int my_switch_case(const char *format, int a, va_list list)
{
    switch (format[a]) {
        case '%':
            my_putchar('%');
            break;
        case 'c':
            my_putchar(va_arg(list, int));
            break;
        case 'i':
            my_put_nbr(va_arg(list, int));
            break;
        case 'd':
            my_put_nbr(va_arg(list, int));
            break;
        case 's':
            my_putstr(va_arg(list, char *));
            break;
        case 'u':
            my_put_nbr_two(va_arg(list, unsigned int));
            break;
    }
}
