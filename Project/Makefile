##
## EPITECH PROJECT, 2023
## JAM 2 | Virgil
## File description:
## Makefile
##

NAME 	=	dash_geometry
SRC		=	./src/*.c
OBJ 	= 	$(SRC:.c=.o)
ARGS 	= 	`arg="$(filter-out $@,$(MAKECMDGOALS))" && echo $${arg:-${1}}`
CFLAGS 	=	-g3 -Wall -Wextra -Werror -I./include
CSFML 	=	-lcsfml-system -lcsfml-window -lcsfml-graphics -lcsfml-audio -lcsfml-network

$(NAME):
		@gcc -o $(NAME) $(SRC) $(CSFML) $(CFLAGS)

all:	$(NAME)

clean:
	@rm -f $(OBJ)

fclean:	clean
	@rm -f $(NAME)

re:	fclean all

debug:
	make fclean all
	valgrind --log-file="dump" ./$(NAME) $(call ARGS,defaultstring)
	cat -e dump

push: fclean
	git add .
	git commit -m "$(call ARGS,auto commit)"
	git push
