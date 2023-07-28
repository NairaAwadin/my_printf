/*
** EPITECH PROJECT, 2022
** modulo_p
** File description:
** %p
*/

#include "my.h"

int modulo_p(unsigned long long nb)
{
    int quot = 0;

    if (nb > 1) {
        modulo_p(nb / 16);
    }

    quot = nb % 16;
    if (quot > 9) {
        my_printf("%c", quot + 'a' - 10);
    } else
        my_printf("%d", quot);
}
