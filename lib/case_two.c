/*
** EPITECH PROJECT, 2022
** swtich case 2
** File description:
** case 2
*/

#include "my.h"

int case_two(const char *format, int a, va_list list)
{
    switch (format[a]) {
    case 'o':
        my_octal(va_arg(list, int));
        break;
    case 'x':
        my_hexa_min(va_arg(list, int));
        break;
    case 'X':
        my_hexa_maj(va_arg(list, int));
        break;
    case 'b':
        my_binary(va_arg(list, int));
        break;
    case 'p':
        my_putstr("0x");
        modulo_p(va_arg(list,unsigned long long));
        break;
    }
}
