# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sglass <sglass@student.21-school.>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/10/31 11:27:33 by sglass            #+#    #+#              #
#    Updated: 2020/11/04 14:31:00 by sglass           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c ft_memcpy.c ft_memchr.c ft_memcmp.c ft_memmove.c ft_memset.c ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c ft_memccpy.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c 
OBJS	= ${SRCS:.c=.o}

CFLAGS 	= -Wall -Wextra -Werror -Iincludes

NAME	= libft.a

GCC		= gcc

AR		= ar

RC		= rc

RM		= rm -f

FT_H  	= libft.h


all:	${NAME}

.c.o:
			${GCC} ${CFLAGS} -c  $< -o ${<:.c=.o}



$(NAME):	${OBJS}

			${AR} ${RC} ${NAME} ${OBJS}
			${AR} ${RC} ${NAME} ${FT_H}






clean:
			${RM} ${OBJS}



fclean:		clean
			${RM} ${NAME}


re:			fclean all

bonus:		all
