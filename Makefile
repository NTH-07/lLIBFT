# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nalabdal <nalabdal@student.1337.ma>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/23 20:18:09 by nalabdal          #+#    #+#              #
#    Updated: 2023/11/23 20:18:10 by nalabdal         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c \
	   ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c \
	   ft_memcpy.c ft_memmove.c ft_memset.c ft_memcmp.c ft_memchr.c ft_bzero.c \
	   ft_strnstr.c ft_strlcpy.c ft_strlcat.c ft_atoi.c ft_strdup.c ft_calloc.c \
	   ft_substr.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c \
	   ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c \
	   ft_putnbr_fd.c ft_strtrim.c  ft_striteri.c 

Objects = ${SRCS:.c=.o}

BONUS = ft_lstnew_bonus.c ft_lstlast_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c\
		ft_lstdelone_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c

BonusObjt = ${BONUS:.c=.o}

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror

all : ${Objects} ${NAME}

${NAME} : ${Objects} 
	ar rc ${NAME} ${Objects}

${BonusObjt}: ${BONUS}
	$(CC) ${CFLAGS} -c ${BONUS}
	ar rc ${NAME} ${BonusObjt}

bonus : ${BonusObjt} 
clean :
	rm -f ${Objects} ${BonusObjt}
fclean : clean
	rm -f ${NAME}
re : fclean all