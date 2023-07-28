/*
** EPITECH PROJECT, 2022
** my_put_nbr_two.c
** File description:
** put2
*/

#include "my.h"

int my_put_nbr_two(unsigned int nb)
{
    if (nb < 9) {
        my_putchar(nb + 48);
    }

    if (nb > 9) {
        my_put_nbr_two(nb / 10);
        my_putchar((nb % 10) + 48);
    }
}
