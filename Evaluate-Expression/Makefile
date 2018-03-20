NAME = eval_expr

FLAGS = -Wall -Werror -Wextra

SRCS = ./srcs/*.c

OBJECTS	=	./*.o

HEADER	=	./includes

all:
		@gcc -c $(FLAGS) $(SRCS) -I $(HEADER) -g
		@gcc $(FLAGS) -o $(NAME) main.c $(OBJECTS) -g
		@rm -rf *dSYM
		@rm -rf $(OBJECTS)
clean:
			@rm -rf $(OBJECTS)
fclean: clean
				@rm -rf $(NAME)
re: fclean all