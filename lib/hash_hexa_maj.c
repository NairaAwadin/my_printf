/*
** EPITECH PROJECT, 2022
** hash_hexa_maj.c
** File description:
** hexa maj hash
*/

#include "my.h"

int recu_xx(int nb)
{
    if (nb > 15) {
        recu_xx(nb / 16);
        my_putchar(nb % 16);
    }

    if (nb <= 9)
        my_putchar(nb + '0');

    if (nb >= 10 && nb <= 15) {
        my_putchar(nb + 'A' - 10);
    }
}

int hash_hexa_maj(int nb)
{
    if (nb != '0')
        my_putstr("0X");
    recu_xx(nb);
}
