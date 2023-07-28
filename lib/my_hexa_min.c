/*
** EPITECH PROJECT, 2022
** my_hexa_min.c
** File description:
** %x
*/

#include "my.h"

int my_hexa_min(int nb)
{
    if (nb > 15) {
        my_hexa_min(nb / 16);
        my_putchar(nb % 16);
    }

    if (nb <= 9)
        my_putchar(nb + '0');

    if (nb >= 10 && nb <= 15) {
        my_putchar(nb + 'a' - 10);
        }
}
