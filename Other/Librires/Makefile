NAME  = libft.a


all: $(NAME)

clean:
	rm -rf *.o $(NAME)
ft_putchar.o: ft_putchar.c
	gcc -c ft_putchar.c

ft_swap.o: ft_swap.c
	gcc -c ft_swap.c

ft_putstr.o: ft_putstr.c
	gcc -c ft_putstr.c

ft_strcmp.o: ft_strcmp.c
	 gcc -c ft_strcmp.c

ft_strlen.o: ft_strlen.c
	gcc -c ft_strlen.c

$(NAME): ft_putchar.o ft_swap.o ft_putstr.o ft_strcmp.o ft_strlen.c
	ar rc $(NAME) ft_putchar.o ft_swap.c ft_putstr.o ft_strcmp.o ft_strlen.c
