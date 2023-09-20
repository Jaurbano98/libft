# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:52:06 by jaurbano          #+#    #+#              #
#    Updated: 2023/09/20 16:59:58 by jaurbano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 
SRCS	=	ft_isalpha.c

OBJS	=	$(SRCS:.c=.o)

CC		=	gcc

RM		=	rm -f
CFLAGS	=	-Wall -Wextra -Werror -I.

INCLUDE	= 	libft.h

NAME	=	libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
			ar -rcs $(NAME) $(OBJS) $(INCLUDE)

clean:
	$(RM) $(OBJS)

fclean:			clean
				$(RM) $(NAME)

re:		fclean $(NAME)
