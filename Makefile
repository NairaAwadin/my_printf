##
## EPITECH PROJECT, 2022
## makefile
## File description:
## task01
##

SRC	=	lib/my_putstr.c	\
		lib/my_putchar.c	\
		lib/my_put_nbr.c	\
		lib/my_put_nbr_two.c	\
		my_printf.c	\
		lib/my_octal.c	\
		lib/my_hexa_min.c	\
		lib/my_hexa_maj.c	\
		lib/my_binary.c	\
		lib/modulo_p.c	\
		lib/modulo_s.c	\
		lib/modulo_plus.c	\
		lib/hash_octa.c	\
		lib/hash_hexa_min.c	\
		lib/hash_hexa_maj.c	\
		lib/my_switch_case.c	\
		lib/case_two.c	\
		lib/case_three.c	\
		lib/case_plus.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a


all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)

tests_run:
	gcc -o unit_test $(SRC) tests/test_my_printf.c --coverage -lcriterion
	./unit_tests
clean:
	rm -f $(OBJ)

fclean: clean
	-rm -f $(NAME)

re:	fclean all
