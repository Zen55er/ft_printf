NAME =			libftprintf.a
SRC =			ft_printf.c
SRC_OBJS =		$(SRC:.c=.o)
CC =			@cc
CFLAGS =		-Wall -Wextra -Werror

all:			$(NAME)

$(NAME):		$(SRC_OBJS)
				@ar -rcs $(NAME) $(SRC_OBJS)

clean:
				@rm -f *.o

fclean:			clean
				@rm -f $(NAME)

re:				fclean all

run:
				$(CC) $(CFLAGS) main.c $(NAME)
				@./a.out

.PHONY: all clean fclean re