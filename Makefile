# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asolano- <asolano-@student.42malaga.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/20 12:04:35 by asolano-          #+#    #+#              #
#    Updated: 2022/04/29 09:34:41 by asolano-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_isalnum.c ft_isalpha.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strlen.c \
			ft_strrchr.c ft_isascii.c ft_memchr.c ft_memmove.c ft_strlcat.c ft_atoi.c \
			ft_strncmp.c ft_tolower.c ft_bzero.c ft_isdigit.c ft_memcmp.c ft_memset.c \
			ft_strlcpy.c ft_strnstr.c ft_toupper.c ft_strdup.c ft_calloc.c ft_substr.c \
			ft_strjoin.c ft_split.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
			ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c \
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
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
	
