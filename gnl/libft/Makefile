# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apickett <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/05/01 14:41:42 by apickett          #+#    #+#              #
#    Updated: 2018/05/03 00:36:18 by apickett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

GCC 		=	gcc -Wall -Wextra -Werror -c
AR			=	ar rc
INCLUDES	=	libft.h

FILENAMES = ft_*.c

OUT = $(patsubst %.c, %.o, $(FILENAMES))

INCLUDES = libft.h

all: $(NAME)

$(NAME):
	$(GCC) $(FILENAMES) -I $(INCLUDES)
	$(AR) $(NAME) $(OUT)
	ranlib $(NAME)

clean:
	/bin/rm -f $(OUT)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all
	$(GCC) $(FILENAMES) -I $(INCLUDES)
	$(AR) $(NAME) $(OUT)
	ranlib $(NAME)

.PHONY: clean fclean re