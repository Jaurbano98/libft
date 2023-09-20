# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/15 11:52:06 by jaurbano          #+#    #+#              #
#    Updated: 2023/09/20 16:49:52 by jaurbano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

 
#SRCS	=	ft_atoi.c	ft_isdigit.c	ft_memset.c	ft_strncmp.c			 \
			ft_bzero.c	ft_isprint.c	ft_strchr.c	ft_strnstr.c  \
			ft_calloc.c	ft_memchr.c	ft_strdup.c	ft_strrchr.c				\
			ft_isalnum.c	ft_memcmp.c	ft_strlcat.c	ft_substr.c			\
			ft_isalpha.c	ft_memcpy.c	ft_strlcpy.c	ft_tolower.c		\
			ft_isascii.c	ft_memmove.c	ft_strlen.c	ft_toupper.c
#
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
