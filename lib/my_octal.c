/*
** EPITECH PROJECT, 2022
** my_octal.c
** File description:
** octal
*/

#include "my.h"

int my_octal(int nb)
{
    if (nb < 0) {
        nb = nb * (-1);
        my_putchar('-');
    }
    if (nb < 7) {
        my_putchar(nb + 48);
    }
    if (nb > 7) {
        my_octal(nb / 8);
        my_putchar((nb % 8) + 48);
    }
}
