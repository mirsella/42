SRCS = client.c server.c utils.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
NAME = minitalk

all: $(NAME)

$(NAME): libft.a client server

client: client.o libft.a
	$(CC) $(CFLAGS) -o client client.o -Llibft -lft
	
server: server.o utils.o libft.a
	$(CC) $(CFLAGS) -o server server.o utils.o -Llibft -lft

libft.a:
	make -C libft

clean:
	make -C libft clean
	rm -f $(OBJS)

fclean: clean
	make -C libft fclean
	rm -f client server

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus libft.a client server
