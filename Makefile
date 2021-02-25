# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: magrosje <magrosje@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/30 19:02:25 by magrosje          #+#    #+#              #
#    Updated: 2019/12/30 19:19:33 by magrosje         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

SRCS = ft_printf.c ft_display.c ft_conv_cspm.c ft_conv_diux.c ft_flags_basic.c \
	ft_flags_cspm.c ft_parse_flags.c ft_printf_utils.c

OBJS = ${SRCS:.c=.o}

$(NAME) : ${OBJS}
	ar rcs ${NAME} ${OBJS}

all : ${NAME}

clean :
	rm -f ${OBJS}

fclean : clean
	rm -f ${NAME}
	
re : fclean all

.PHONY: all clean fclean re