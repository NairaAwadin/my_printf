/*
** EPITECH PROJECT, 2022
** hash_hexa_min.c
** File description:
** hash hexa
*/

#include "my.h"

int recu_x(int nb)
{
    if (nb > 15) {
        recu_x(nb / 16);
        my_putchar(nb % 16);
    }

    if (nb <= 9) {
        my_putchar(nb + '0');
    }

    if (nb >= 10 && nb <= 15) {
        my_putchar(nb + 'a' - 10);
    }
}

int hash_hexa_min(int nb)
{
    if (nb != 0)
        my_putstr("0x");
    recu_x(nb);
}
