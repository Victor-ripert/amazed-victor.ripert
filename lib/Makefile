##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## Task 01 10
##

SRC	=	my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\
		my_strcat.c	\
		my_strcmp.c	\
		my_strcpy.c	\
		my_strlen.c	\
		my_strncat.c	\
		my_strncmp.c	\
		my_strncpy.c	\
		my_swap.c	\
		print/mini_printf.c	\
		my_str_to_word_array.c	\
		free_array.c	\
		my_strdup.c	\
		write_error.c	\
		realloc.c	\
		my_isdigit.c	\
		my_strtod.c	\


CPPFLAGS	+=	-iquote ../include

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)
	$(RM) *~

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re
