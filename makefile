CC = gcc
EXEC = teste.exe
CFLAGS = -Wall -Wextra -Werror
EXER = ./ex14/
RETURN = int
PARAM = int nb
PARAV = 5
FUNC = ft_recursive_factorial
PROT = ${RETURN} ${FUNC}(${PARAM});
INC = ./includes/
CFILES = ${EXER}*.c ${INC}ft_putchar.c
OBJECT = ${EXER}*.o ${INC}ft_putchar.o
OUTS = $(CFILES:.c=.o)
CLEAN = rm -f
MAINFILE := \#include <stdio.h>\n\n${PROT}\n\nint	main(void)\n{\n\tprintf(\"%d\t\t\t\", ${FUNC}(${PARAV}));\n\treturn (0);\n}\n

MAKEFLAGS += --silent
BASH := sh

all: ${OUTS}
	${CC} ${CFLAGS} ${OBJECT} -o ${EXEC}

main: 
	echo -e "${MAINFILE}" > main.c

mainr: ${OUTS}
	${CC} ${CFLAGS} ${OBJECT} main.c -o ${EXEC}

mainre: fclean main mainr

clean:
	${CLEAN} ${OBJECT}

fclean: clean
	${CLEAN} ${EXEC} main.c

re: fclean all
