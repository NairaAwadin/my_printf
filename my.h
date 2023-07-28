/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>
    #include <unistd.h>
    #include <stdio.h>

int my_printf(const char *format, ...);
int my_putchar(char c);
int my_putstr(const char *str);
int my_put_nbr(int nb);
int my_put_nbr_two(unsigned int nb);
int my_octal(int nb);
int my_hexa_min(int nb);
int my_hexa_maj(int nb);
int my_binary(int unsigned nb);
int modulo_p(unsigned long long nb);
int modulo_s(char const *str);
int modulo_plus(int s);
int recu(int nb);
int hash_octa(int nb);
int recu_x(int nb);
int hash_hexa_min(int nb);
int recu_xx(int nb);
int hash_hexa_maj(int nb);
int my_switch_case(const char *format, int a, va_list list);
int case_two(const char *format, int a, va_list list);
int case_three(const char *format, int *a, va_list list);
int case_four(const char *format, int *a, va_list list);
int case_plus(const char *format, int *a, va_list list);
int special_case(const char *format, int *a, va_list list);

#endif
