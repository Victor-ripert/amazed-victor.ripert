##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## make
##

SRC =	src/str/my_strlen.c			\
	src/str/my_strcmp.c				\
	src/str/my_strdup.c				\
	src/tree/search_in_list.c		\
	src/tree/child_array_len.c		\
	src/tree/child_append.c			\
	src/tree/connect_link.c			\
	src/tree/search_node.c			\
	src/tree/add_to_list.c			\
	src/tree/algo.c 				\
	src/tree/display_list.c 		\
	src/tree/free_tree_array.c	\
	src/tree/tree_array_append.c

NAME	=	amazed

OBJ	=	$(SRC:.c=.o)

MAIN_SRC += src/main.c

MAIN += $(MAIN_SRC:.c=.o)

CR_TEST += tests/test_tree.c

INC += -iquote ./include

DEBUG_VALGRIND += -g3 -ggdb3 $(INC)

CPPFLAGS += -g3 -ggdb3 $(INC) -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ) $(MAIN)
	$(CC) -o $(NAME) $(MAIN) $(OBJ)

debug: fclean $(OBJ)
	$(CC) -o $(NAME) $(MAIN) $(OBJ) $(DEBUG_VALGRIND)

clean:
	@$(RM) $(OBJ) $(MAIN)

fclean:	clean
	@$(RM) $(NAME)

re:	fclean  all

coding_style: fclean fclean_unit
	clear && ~/coding-style.sh .
	cat coding-style-reports.log
	@$(RM) coding-style-reports.log

clean_unit:
	@$(RM) *.gcno
	@$(RM) *.gcda

fclean_unit:	clean_unit
	@$(RM) unit_tests

unit_tests:	fclean
	@$(CC) -o unit_tests $(SRC) $(CR_TEST) -I./include --coverage -lcriterion

tests_run : fclean_unit unit_tests
	@./unit_tests

gcovr_unit:
	gcovr --exclude tests/

gcovr_unit_html: tests_run
	gcovr --html-details coverage && firefox coverage

clean_unit_html: fclean_unit
	@$(RM) coverage*.html
	@$(RM) coverage.css
	@$(RM) coverage


.PHONY: all clean fclean re coding_style debug\
	clean_unit fclean_unit unit_tests tests_run gcovr_unit
