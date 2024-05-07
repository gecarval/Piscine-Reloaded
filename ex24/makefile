EXEC = libft.a
SRCS = ./srcs/
INC = ./includes/
CC = gcc
FLAGS = -Wall -Wextra -Werror
CFILES = ${SRCS}ft_putchar.c ${SRCS}ft_putstr.c  ${SRCS}ft_strcmp.c  ${SRCS}ft_strlen.c  ${SRCS}ft_swap.c
DEL = rm -f

all:
	${CC} ${FLAGS} -c ${CFILES} -I ${INC}
	ar rc ${EXEC} *.o

clean:
	${DEL} *.o

fclean: clean
	${DEL} ${EXEC} 
	${DEL} ${INC}*.*.gch

re: fclean all
