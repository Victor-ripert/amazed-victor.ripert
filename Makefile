##
## EPITECH PROJECT, 2025
## Makefile
## File description:
## make
##

SRC =	$(addprefix src/,	\
	tree/search_in_list.c	\
	tree/child_array_len.c	\
	tree/child_append.c	\
	tree/connect_link.c	\
	tree/search_node.c	\
	tree/add_to_list.c	\
	tree/display_list.c	\
	tree/free_tree_array.c	\
	algo.c	\
	tree_array_append.c	\
	parsing/amazed.c	\
	parsing/checking_error_bin.c	\
	parsing/parse_maze.c	\
	parsing/parse_line.c	\
	parsing/parse_command.c	\
	parsing/parse_robots.c	\
	parsing/is_room_line.c	\
	parsing/parse_room.c	\
	parsing/is_tunnel_line.c	\
	parsing/parse_tunnel.c	\
)

NAME	=	amazed

OBJ	=	$(SRC:.c=.o)

MAIN_SRC += src/main.c

MAIN += $(MAIN_SRC:.c=.o)

CR_TEST += tests/test_tree.c

INC += -iquote ./include

DEBUG_VALGRIND += -g3 -ggdb3 $(INC)

CPPFLAGS += -ggdb3 $(INC) -Wall -Wextra

all:		$(NAME)

$(NAME):	$(OBJ) $(MAIN)
	make -C ./lib
	$(CC) $(OBJ) -L./lib -lmy -o $(NAME) $(MAIN)

debug: fclean $(OBJ)
	$(CC) -o $(NAME) $(MAIN) $(OBJ) $(DEBUG_VALGRIND)

clean:
	@$(RM) $(OBJ) $(MAIN)
	make clean -C ./lib

fclean:	clean
	@$(RM) $(NAME)
	make fclean -C ./lib

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
