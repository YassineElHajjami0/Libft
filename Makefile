# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yel-hajj <yel-hajj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/29 15:02:35 by yel-hajj          #+#    #+#              #
#    Updated: 2022/11/01 12:32:34 by yel-hajj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ft_atoi.c \
	ft_isalnum.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_memmove.c \
	ft_putendl_fd.c \
	ft_split.c \
	ft_striteri.c \
	ft_strlcpy.c \
	ft_strncmp.c \
	ft_strtrim.c \
	ft_toupper.c \
	ft_bzero.c \
	ft_isalpha.c \
	ft_isprint.c \
	ft_memcmp.c \
	ft_memset.c \
	ft_putnbr_fd.c \
	ft_strchr.c \
	ft_strjoin.c \
	ft_strlen.c \
	ft_strnstr.c \
	ft_substr.c \
	ft_calloc.c \
	ft_isascii.c \
	ft_itoa.c \
	ft_memcpy.c \
	ft_putchar_fd.c \
	ft_putstr_fd.c \
	ft_strdup.c \
	ft_strlcat.c \
	ft_strmapi.c \
	ft_strrchr.c \
	ft_tolower.c \

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

OBJ = ${SRC:.c=.o}
BOBJ = ${BONUS:.c=.o}
NAME = libft.a
RM = rm -rf
HEADER = libft.h


all : $(NAME)

${NAME} : ${OBJ}
	ar rc ${NAME} ${OBJ}

bonus : ${BOBJ}
	ar rc ${NAME} ${BOBJ}

%.o : %.c ${HEADER}
	${CC} ${CFLAGS} -c $<

clean :
	${RM} ${OBJ} ${BOBJ}

fclean : clean
	${RM} ${NAME}

re : fclean all
