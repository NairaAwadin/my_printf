/*
** EPITECH PROJECT, 2022
** hash_octa.c
** File description:
** hash_octa
*/

#include "my.h"

int recu(int nb)
{
    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb < 7) {
        my_putchar(nb + 48);
    }
    if (nb > 7) {
        recu(nb / 8);
        my_putchar((nb % 8) + 48);
    }
}

int hash_octa(int nb)
{
    if (nb != '0')
        my_putchar('0');
    recu(nb);
}
