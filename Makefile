# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhittlov <mhittlov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/10/29 17:11:36 by mhittlov          #+#    #+#              #
#    Updated: 2024/02/16 18:28:39 by mhittlov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME 	= 	libft.a

CFLAGS 	= 	-Wall -Werror -Wextra

CC		= 	cc

RM 	= 	rm -f

HEADER = libft.h

SOURCES =  	ft_atoi.c \
			ft_strlen.c \
			ft_calloc.c \
			ft_strdup.c \
			ft_substr.c \
			ft_strjoin.c \
			ft_strtrim.c \
			ft_split.c \
			ft_itoa.c \
			ft_strmapi.c \
			ft_striteri.c \
			ft_putchar_fd.c \
			ft_putstr_fd.c \
			ft_putendl_fd.c \
			ft_putnbr_fd.c \
			ft_memmove.c \
			ft_memcpy.c \
			ft_strlcpy.c \
			ft_strlcat.c \
			ft_isalpha.c \
			ft_isdigit.c \
			ft_isalnum.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_memset.c \
			ft_bzero.c \
			ft_toupper.c \
			ft_tolower.c \
			ft_strchr.c \
			ft_strrchr.c \
			ft_strncmp.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_strnstr.c \

OBJECTS = $(SOURCES:.c=.o)

BONUS = 	ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstnew.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstadd_back.c \
			ft_lstsize.c \

OBJSBONUS = ${BONUS:.c=.o}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

$(NAME): ${OBJECTS}
					ar rcs ${NAME} ${OBJECTS}

bonus: ${OBJSBONUS}
					ar rcs ${NAME}  ${OBJSBONUS}

all: $(NAME)

clean: 
				${RM} ${OBJECTS} ${OBJSBONUS} $(NAME)

fclean: clean
				${RM} ${NAME}

re:				fclean all

.PHONY: all, bonus, clean, fclean, re
