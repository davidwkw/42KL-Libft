# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: kwang <kwang@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/19 16:55:08 by kwang             #+#    #+#              #
#    Updated: 2021/05/24 20:32:45 by kwang            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	ft_atoi.c \
		ft_bzero.c \
		ft_calloc.c \
	   	ft_strjoin.c \
		ft_isascii.c \
		ft_isalnum.c \
		ft_isalpha.c \
		ft_isdigit.c \
		ft_isprint.c \
		ft_itoa.c \
		ft_memccpy.c \
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
		ft_strjoin.c \
		ft_strlcpy.c \
		ft_strlen.c \
		ft_strlcat.c \
		ft_strmapi.c \
		ft_strncmp.c \
		ft_strnstr.c \
		ft_strrchr.c \
		ft_strtrim.c \
		ft_substr.c \
		ft_tolower.c \
		ft_toupper.c \

BNS_SRCS =	ft_lstnew.c \
			ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstclear.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstmap.c \
			ft_lstsize.c \
			ft_strndup_bonus.c \
			ft_strcpy_bonus.c \

OBJS = $(SRCS:.c=.o)

BNS_OBJS = $(BNS_SRCS:.c=.o)

NAME = libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

RM = rm -f

%.o: %.c
	@$(CC) $(CFLAGS) -c $< -o $@

all: bonus

$(NAME): $(OBJS)
	@echo "Creating lib file..."
	@ar rcs $(NAME) $(OBJS)

bonus: $(BNS_OBJS) $(NAME)
	@echo "Creating lib file with bonus..." 
	@ar rs $(NAME) $(BNS_OBJS)

clean:
	@echo "Cleaning up all .o files..."
	@$(RM) $(OBJS) $(BNS_OBJS)

fclean: clean
	@echo "Cleaning up .a file"
	@$(RM) $(NAME)

re: fclean all
	@echo "Recompiling .a file..."

rebonus: fclean bonus
	@echo "Recompiling .a file with bonus..."

.PHONY: all re clean fclean bonus rebonus
