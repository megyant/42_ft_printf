# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mbotelho <mbotelho@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/20 11:18:52 by mbotelho          #+#    #+#              #
#    Updated: 2025/11/04 11:54:05 by mbotelho         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
FT = ft_
B = _bonus
PART1 = $(FT)isalpha.c          $(FT)isdigit.c           $(FT)isalnum.c        $(FT)isascii.c \
	    $(FT)isprint.c          $(FT)strlen.c            $(FT)memset.c         $(FT)bzero.c \
        $(FT)memcpy.c           $(FT)memmove.c           $(FT)strlcpy.c        $(FT)strlcat.c \
	    $(FT)strchr.c           $(FT)strrchr.c           $(FT)strncmp.c        $(FT)memchr.c \
	    $(FT)tolower.c          $(FT)toupper.c           $(FT)memcmp.c         $(FT)strnstr.c \
	    $(FT)atoi.c             $(FT)calloc.c            $(FT)strdup.c

PART2 = $(FT)substr.c           $(FT)strjoin.c           $(FT)strtrim.c        $(FT)split.c \
	    $(FT)itoa.c             $(FT)strmapi.c           $(FT)striteri.c       $(FT)putchar_fd.c \
	    $(FT)putstr_fd.c        $(FT)putendl_fd.c        $(FT)putnbr_fd.c

BONUS = $(FT)lstnew$(B).c       $(FT)lstadd_front$(B).c  $(FT)lstsize$(B).c    $(FT)lstlast$(B).c \
        $(FT)lstadd_back$(B).c  $(FT)lstdelone$(B).c     $(FT)lstclear$(B).c   $(FT)lstiter$(B).c \
		$(FT)lstmap$(B).c

SRCS = $(PART1) $(PART2)
OBJS = $(SRCS:.c=.o)

BONUS_SRCS = $(BONUS)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rc $(NAME) $(BONUS_OBJS)
	@touch bonus

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)
	@touch bonus
	@rm bonus

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
