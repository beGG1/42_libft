# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sshabali <sshabali@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/12 19:05:28 by sshabali          #+#    #+#              #
#    Updated: 2025/01/04 10:20:30 by sshabali         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isascii.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memchr.c \
		ft_memcmp.c \
		ft_memcpy.c \
		ft_memmove.c \
		ft_memset.c \
		ft_putchar_fd.c \
		ft_putendl_fd.c \
		ft_putnbr_fd.c \
		ft_putstr_fd.c \
		ft_split.c \
		ft_strchr.c \
		ft_strdup.c \
		ft_striteri.c \
		ft_strjoin.c \
		ft_strlcat.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \
		ft_lstnew_bonus.c \
		ft_lstadd_back_bonus.c \
		ft_lstadd_front_bonus.c \
		ft_lstclear_bonus.c \
		ft_lstdelone_bonus.c \
		ft_lstiter_bonus.c \
		ft_lstlast_bonus.c \
		ft_lstmap_bonus.c \
		ft_lstsize_bonus.c \
		ft_printf.c \
		converters.c \
		hex_functions.c \
		number_functions.c \
		print_format.c \
		string_functions.c \
		utils.c \
		unumber_functions.c \
		ptr_functions.c

INCLUDES			= libft.h

OBJS				= ${SRCS:.c=.o}

OBJS_BONUS			= ${SRCS_BONUS:.c=.o}

NAME				= libft.a

CC					= cc

RM					= rm -f

CFLAGS				= -Wall -Wextra -Werror

all:				${NAME}

.c.o:
					${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${OBJS}:			${INCLUDES}

${OBJS_BONUS}:		${INCLUDES}

$(NAME):			${INCLUDES} ${OBJS}
					ar -rcs ${NAME} ${OBJS}

clean:
					${RM} ${OBJS} ${OBJS_BONUS}

fclean:				clean
					${RM} ${NAME}

re:					fclean all

.PHONY:				all clean fclean re