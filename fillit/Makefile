# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: scleerdi <scleerdi@student.codam.nl>         +#+                      #
#                                                    +#+                       #
#    Created: 2019/05/01 12:02:34 by scleerdi       #+#    #+#                 #
#    Updated: 2019/05/16 13:12:05 by lsmienk       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = fillit
FLAGS = -Wall -Werror -Wextra 
SRC = fillit.c validate.c main.c solver.c fillit.h
OBJECT = *.o ../libft/*.o

all: $(NAME)

$(NAME):
	make -C ../libft/ fclean && make -C ../libft
	clang  -c $(FLAGS) $(SRC) -I includes
	clang -o $(NAME) $(OBJECT) -I ../libft -L ../libft -lft

clean:
	-rm -f $(OBJECT) 

fclean: clean
	-rm -f $(NAME)

re: fclean all
