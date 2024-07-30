# ************************************************************************** #
#                                 DIRECTORIES                                #
# ************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

NAME = libftprintf.a

SRCS = ft_printf.c ft_putadress.c ft_putchar.c ft_putnbr.c ft_putstr.c ft_utils.c 


OBJ = $(SRCS:.c=.o)

BOBJ = $(BSOURCE:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)

bonus : $(OBJ) $(BOBJ)
		ar rcs $(NAME) $(OBJ) $(BOBJ)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJ) $(BOBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : re clean fclean all bonus
