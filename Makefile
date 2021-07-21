# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rcheiko <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/01/21 12:53:49 by rcheiko           #+#    #+#              #
#    Updated: 2021/01/28 11:14:25 by rcheiko          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS		=	ft_memset.c ft_bzero.c ft_memcpy.c ft_memccpy.c \
				ft_memchr.c ft_memcmp.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
				ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c \
				ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
				ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_atoi.c ft_calloc.c \
				ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
				ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c \
				ft_putendl_fd.c ft_putnbr_fd.c ft_memmove.c

SRCS_BONUS	=	ft_lstnew.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstadd_front.c ft_lstdelone.c ft_lstclear.c \
				ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
				ft_lstiter.c ft_lstmap.c


OBJS		=	${SRCS:.c=.o}

OBJS_BONUS	=	${SRCS_BONUS:.c=.o}

CC			=	gcc

CFLAGS		=	-Wall -Wextra -Werror -I./includes

RM			=	rm -f

all:			${NAME}

$(NAME):		${OBJS}
				ar rcs ${NAME} ${OBJS}

bonus:			${OBJS_BONUS}
				ar rcs ${NAME} ${OBJS_BONUS}

clean:
				${RM} ${OBJS} ${OBJS_BONUS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all
