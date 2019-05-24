# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: lsmienk <lsmienk@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2019/03/21 16:55:01 by lsmienk        #+#    #+#                 #
#    Updated: 2019/05/09 14:55:36 by lsmienk       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
RAWFILES =  ft_abs ft_atoi ft_bzero ft_itoa ft_isalnum ft_isalpha ft_isascii \
			ft_isdigit ft_isprint  ft_intlen ft_memcpy ft_memalloc ft_memdel \
			ft_memset ft_putchar ft_putchar_fd ft_putendl ft_putendl_fd  \
			ft_putnbr ft_putnbr_fd ft_putstr ft_putstr_fd ft_strcmp ft_strdel\
			ft_strdup ft_strlen ft_strchr ft_strrchr ft_strclr ft_strncmp \
			ft_strnew  ft_strcat ft_strncat ft_strlcat ft_strcpy ft_strend \
			ft_strstr ft_strnstr ft_strrev ft_striter ft_striteri ft_strmap\
			ft_strmapi ft_strequ ft_strnequ  ft_strsub ft_tolower ft_toupper \
			ft_strncpy ft_strjoin ft_strtrim ft_memmove ft_memccpy ft_memchr \
			ft_memcmp ft_wordcount ft_strsplit ft_strnlen ft_lstnew  ft_lstaddend\
			ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap ft_atoi_base

SRC = $(RAWFILES:%=%.c)
OBJ = $(RAWFILES:%=%.o)
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	gcc  $(FLAG) -c $(SRC) -I ./includes
	ar -rcsv $(NAME) $(OBJ)

clean:
	/bin/rm -f $(OBJ)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
