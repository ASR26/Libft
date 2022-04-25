# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 12:04:35 by asolano-          #+#    #+#              #
#    Updated: 2022/04/22 09:28:09 by asolano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalnum.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c \
			ft_strrchr.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcat.c ft_atoi.c \
			ft_strncmp.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memcmp.c ft_memset.c \
			ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_strdup.c ft_calloc.c
OBJS	=	${SRCS:.c=.o}
TARGET	=	libft.a
RM		=	rm -f
CC		=	gcc
CFLAGS	=	-Werror -Wextra -Wall

all: ${TARGET}

%.o: %.c
	${CC} ${CFLAGS} -c $< -o $@

${TARGET}: ${OBJS}
	ar rc ${TARGET} ${OBJS}

clean:
	${RM} ${OBJS}

fclean: clean
	${RM} ${TARGET}

re: fclean all

.PHONY: all clean fclean re 
	
