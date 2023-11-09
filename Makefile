NAME = libftprintf.a

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCs =





OBJs = $(SRC:c=.o)

all: $(NAME)

$(NAME):	$(OBJs)
	ar rcs $(NAME) $(OBJs)

%.o:	%.c
	gcc $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJs)

fclean: clean
	$(RM) $(NAME)

re:	fclean all



