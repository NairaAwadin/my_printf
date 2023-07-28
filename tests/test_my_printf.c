/*
** EPITECH PROJECT, 2022
** test my_printff
** File description:
** unit test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../my.h"

void redirect_all_std(void)
{
cr_redirect_stdout ();
cr_redirect_stderr ();
}

Test(my_printf, flaged, .init = redirect_all_std) {
    my_printf("%d\n", 17);
    cr_assert_stdout_eq_str("17\n");
}

Test(my_printf, flages, .init = redirect_all_std) {
    my_printf("%s\n", "hello");
    cr_assert_stdout_eq_str("hello\n");
}

Test(my_printf, flagec, .init = redirect_all_std) {
    my_printf("%c\n", 'v');
    cr_assert_stdout_eq_str("v\n");
}

Test(my_printf, flageu, .init = redirect_all_std) {
    my_printf("%u\n", -42);
    cr_assert_stdout_eq_str("4294967254\n");
}

Test(my_printf, flageh, .init = redirect_all_std) {
    my_printf("%u\n", 42);
    cr_assert_stdout_eq_str("42\n");
}

Test(my_printf, flagej, .init = redirect_all_std) {
    my_printf("%u\n", 0);
    cr_assert_stdout_eq_str("0\n");
}

Test(my_printf, flagem, .init = redirect_all_std) {
    my_printf("%%\n");
    cr_assert_stdout_eq_str("%\n");
}

Test(my_printf, flage0, .init = redirect_all_std) {
    my_printf("%o\n", 10);
    cr_assert_stdout_eq_str("12\n");
}

Test(my_printf, flagex, .init = redirect_all_std) {
    my_printf("%x\n", 10);
    cr_assert_stdout_eq_str("a\n");
}

Test(my_printf, flagemaj, .init = redirect_all_std) {
    my_printf("%X\n", 10);
    cr_assert_stdout_eq_str("A\n");
}

Test(my_printf, flageb, .init = redirect_all_std) {
    my_printf("%b\n", 5);
    cr_assert_stdout_eq_str("0101\n");
}

Test(my_printf, flageplusd, .init = redirect_all_std) {
    my_printf("%+d\n", 5);
    cr_assert_stdout_eq_str("+5\n");
}

Test(my_printf, flageplusi, .init = redirect_all_std) {
    my_printf("%+i\n", 13);
    cr_assert_stdout_eq_str("+13\n");
}

Test(my_printf, flagehashtago, .init = redirect_all_std) {
    my_printf("%#o\n", 10);
    cr_assert_stdout_eq_str("012\n");
}

Test(my_printf, flageqef, .init = redirect_all_std) {
    my_printf("%#x\n", 10);
    cr_assert_stdout_eq_str("0xa\n");
}
