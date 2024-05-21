##
## EPITECH PROJECT, 2023
## test
## File description:
## test
##

FLAG = -lcsfml-graphics -lcsfml-window -lcsfml-system -lcsfml-audio

all:	libmy.a
	gcc main.c -o my_hunter -Wall -Wextra -L./lib/my -lmy $(FLAG)

libmy.a:
	make compile -C ./lib/my

clean:
	rm libmy.a
	rm lib/my/libmy.a

fclean: clean

re: fclean libmy.a
