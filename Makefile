# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tbelleng <tbelleng@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/10 13:14:37 by tbelleng          #+#    #+#              #
#    Updated: 2022/11/29 13:17:20 by tbelleng         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	srcs/ft_printf.c \
	srcs/ft_printf_char.c \
	srcs/ft_printf_hexa.c \
	srcs/ft_printf_nbr.c \


OBJ = ${SRCS:.c=.o}

INCL = ./includes 

NAME =	libftprintf.a

CC = gcc

LIB_PATH = libft/

LIB = libft.a

CFLAGS = -Wall -Wextra -Werror -I${INCL}

all: ${NAME}

$(NAME): ${OBJ}
	 ${MAKE} -C ${LIB_PATH}
	 cp ${LIB_PATH}${LIB} ${NAME}
	 ar rcs ${NAME} ${OBJ}

clean:
	${MAKE} -C ${LIB_PATH} clean 
	rm -f ${OBJ}

fclean:	clean
	${MAKE} -C ${LIB_PATH} fclean 
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean fclean re bonus
