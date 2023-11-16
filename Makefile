NAME = libftprintf.a

RM = rm -f

CFLAGS = -Wall -Wextra -Werror

SRCs = ft_printf.c \
       ft_printchr.c \
       ft_printint.c \
       ft_printstr.c \
       ft_printpoint.c \
       ft_printusigint.c \
       ft_printhex.c \
       ft_strchr.c \







OBJs = $(SRCs:.c=.o)

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




.PHONY: all clean fclean re
.SILENT: all $(NAME) $(OBJs) clean fclean re



