##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## epitech 2017
##

SRC	=	src/my_ls.c

SRC_LIB	=		src/my_putchar.c\
			src/my_put_nbr.c	\
			src/my_putstr.c	\
			src/my_putnbr_base.c	\
			src/my_printf.c	\
			src/my_strlen.c	\
			src/my_strcpy.c	\
			src/ls.c		\
			src/my_ls_d.c		\
			src/my_ls_t.c		\
			src/permissions.c	\
			src/my_ls_l.c		\
			src/my_ls_a.c		\
			src/ls1.c		\

OBJ	=	$(SRC:.c=.o)

OBJ_LIB	=	$(SRC_LIB:.c=.o)

NAME1	=	libmy.a

NAME	=	my_ls

##CFLAGS +=	-Wall -Wextra -Iinclude -g3

all:	$(NAME1) $(NAME)

$(NAME1):	$(OBJ_LIB)
	ar rc $(NAME1) $(OBJ_LIB)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) -L. $(NAME1)

clean:
	rm -f $(OBJ) $(OBJ_LIB)

fclean:	clean
	rm -f $(NAME) $(NAME1)

re:	fclean all

.PHONY:	all re clean fclean
