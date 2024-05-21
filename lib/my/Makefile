##
## EPITECH PROJECT, 2023
## make
## File description:
## file
##

SRC	=	init_program.c		\
		rules.c			\
		event.c			\
		position.c		\
		rec.c			\
		window.c		\
		mini_printf.c		\
		my_putchar.c		\
		my_put_nbr.c		\
		my_putstr.c		\
		my_strcpy.c		\
		my_strlen.c		\

OBJ	=	$(SRC:.c=.o)

all:	compile

compile:	$(OBJ)
	ar rc libmy.a $(OBJ)
	rm -f $(OBJ)
	cp libmy.a ../..

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f a.out

re: fclean a.out
