# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jaurbano <jaurbano@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/20 22:04:18 by jaurbano          #+#    #+#              #
#    Updated: 2023/09/20 22:23:18 by jaurbano         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS			= ft_isalpha.c ft_isdigit.c

OBJS			= $(SRCS:.c=.o)
CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean $(NAME)