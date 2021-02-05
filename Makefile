# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rledrin <rledrin@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/10 11:44:06 by rledrin           #+#    #+#              #
#    Updated: 2019/10/21 12:54:58 by rledrin          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_atoi.c
SRCS += ft_bzero.c
SRCS += ft_calloc.c
SRCS += ft_isalnum.c
SRCS += ft_isalpha.c
SRCS += ft_isascii.c
SRCS += ft_isdigit.c
SRCS += ft_isprint.c
SRCS += ft_itoa.c
SRCS += ft_memccpy.c
SRCS += ft_memchr.c
SRCS += ft_memcmp.c
SRCS += ft_memcpy.c
SRCS += ft_memmove.c
SRCS += ft_memset.c
SRCS += ft_putchar_fd.c
SRCS += ft_putendl_fd.c
SRCS += ft_putnbr_fd.c
SRCS += ft_putstr_fd.c
SRCS += ft_split.c
SRCS += ft_strchr.c
SRCS += ft_strdup.c
SRCS += ft_strjoin.c
SRCS += ft_strlcat.c
SRCS += ft_strlcpy.c
SRCS += ft_strlen.c
SRCS += ft_strmapi.c
SRCS += ft_strncmp.c
SRCS += ft_strnstr.c
SRCS += ft_strrchr.c
SRCS += ft_strtrim.c
SRCS += ft_substr.c
SRCS += ft_tolower.c
SRCS += ft_toupper.c
SRCS += ft_putstr.c
SRCS += ft_putnbr.c
SRCS += ft_putchar.c

BONUS = ft_lstadd_back_bonus.c
BONUS += ft_lstadd_front_bonus.c
BONUS += ft_lstclear_bonus.c
BONUS += ft_lstdelone_bonus.c
BONUS += ft_lstiter_bonus.c
BONUS += ft_lstlast_bonus.c
BONUS += ft_lstnew_bonus.c
BONUS += ft_lstsize_bonus.c

OBJS = $(SRCS:.c=.o)

BONUSOBJS = $(BONUS:.c=.o)

FLAGS = -Wall -Wextra -Werror

RM = /bin/rm -f

.c.o:
	gcc $(FLAGS) -c $< -o $(<:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

bonus: $(BONUSOBJS) $(NAME)
	ar crs $(NAME) $(BONUSOBJS)

clean:
	$(RM) $(OBJS) $(BONUSOBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
