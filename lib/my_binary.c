/*
** EPITECH PROJECT, 2022
** my_binary.c
** File description:
** modulo b
*/

#include "my.h"

int my_binary(unsigned int nb)
{
    if (nb < 1) {
        my_putchar(nb + 48);
    }
    if (nb >= 1) {
        my_binary(nb / 2);
        my_putchar((nb % 2) + 48);
    }
}
