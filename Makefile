##
## EPITECH PROJECT, 2019
## minishell2
## File description:
## Makefile
##

SRC				=	src/main.c		\
					src/matchstick.c\
					src/map.c		\
					src/error.c		\
					src/remove_pip.c\
					src/art_int.c	\
					src/line_and_match.c


SRC2			=

OBJ				=	$(SRC:.c=.o)

LIB				=	-L ./lib/my -lmy
LIBT			=	-L ./../lib/my -lmy

TEST			=	$(addprefix $(TEST_FOLDER), $(TEST_FILE))
TEST_FOLDER		=	tests/
TEST_FILE		=

CC				=	gcc
CFLAGS			=	-I ./include -W -Wall -Wextra -g -g3 -ggdb
LDFLAGS			=	-lcriterion --coverage

NAME			=	matchstick
TNAME			=	unit_test

RM				=	rm -f

all:		$(OBJ)
		make -C ./lib/my
		$(CC) -o $(NAME) $(OBJ) -l ncurses $(LIB) $(INC)
		make -C ./lib/my clean
		$(RM) $(OBJ)

tests_run:
		make -C ./lib/my
		$(CC) -o $(TNAME) $(SRC2) $(TEST) $(LIB) $(CFLAGS) $(LDFLAGS)
		./$(TNAME)
		gcovr -e test -b

clean:
		$(RM) $(OBJ)
		make -C ./lib/my clean
		$(RM) $(TNAME) *.gcda *.gcno

fclean:		clean
		make -C ./lib/my fclean
		$(RM) $(NAME)

re:		fclean all

.SILENT: