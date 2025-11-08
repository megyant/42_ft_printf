NAME = libftprintf.a

SRCS = ft_putchar.c  ft_putstr.c  ft_putnbr_base.c  ft_putnbr_base_upper.c \
       ft_putnbr_unsigned.c  ft_putadress.c   ft_printf.c  main.c
OBJS = $(SRCS:.c=.o)

CC = cc
FLAGS = -Wall -Werror -Wextra
RM = rm -f

.c.o:
	$(CC) $(FLAGS) -c $< -o $(<:.c=.o)

$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS) $(BONUS_OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re