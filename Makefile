# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: asalguer <asalguer@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 10:24:06 by asalguer          #+#    #+#              #
#    Updated: 2024/10/09 18:46:07 by asalguer         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = cc

CFILES = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c\
ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c\
ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c ft_strnstr.c\
ft_strrchr.c ft_tolower.c ft_toupper.c ft_calloc.c ft_strdup.c ft_substr.c\
ft_strjoin.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_split.c

BONUS = ft_lslast_bonus.c ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c\
ft_lstclear_bonus.c ft_lstdelone_bous.c ft_lstiter_bonus.c\
ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

HEADERS_DIR = /

OBJS = $(CFILES:.c=.o)

OBJS_BONUS = $(BONUS:.c=.o)

CFLAGS = -Wall -Werror -Wextra $(HEADERS_DIR)

all: $(NAME)

$(NAME): $(OBJS)
	@ar rc $(NAME) $(OBJS)
	@echo "creando objetos.."

bonus: $(OBJS) $(OBJS_BONUS)
		@ar rc $(NAME) $(OBJS) $(OBJS_BONUS)
		@echo "creando objetos bonus..."

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)
	@echo "limpiando los objetos..."

fclean: clean
	@rm -f $(NAME)
	@echo "limpiando $(NAME)"

re: fclean all

exe: all clean
	@./$(NAME)
	@rm -f $(NAME)

.PHONY: all clean fclean re exe