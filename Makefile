NAME = octocat
CC = gcc
CFLAGS = -W -Wall -Werror -Wextra -pedantic
OBJ = $(SRCS:%.c=%.o)
SRCS =	main.c\
		fonctions_libmy.c\
		menu.c\
		map.c\
		casual.c\
		hardcore.c\
		actions.c\
		end_messages.c

$(NAME):	$(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

all:	$(NAME)

re:		fclean
	make
