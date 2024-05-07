CC = gcc
EXEC = teste.exe
CFLAGS = -Wall -Wextra -Werror
EXER = ./ex15/
RETURN = void
PARAM = void
PARAV = 
FUNC = ft_print_alphabet
PRINT = %d
PROT = ${RETURN} ${FUNC}(${PARAM});
INC = ./includes/
CFILES = ${EXER}*.c ${INC}ft_putchar.c
OBJECT = ${EXER}*.o ${INC}ft_putchar.o
OUTS = $(CFILES:.c=.o)
CLEAN = rm -f
MAINFILE := \#include <stdio.h>\n\n${PROT}\n\nint	main(void)\n{\n\tprintf(\"${PRINT}\t\t\t\", ${FUNC}(${PARAV}));\n\treturn (0);\n}\n
MAINFILE2 := \#include <stdio.h>\n\n${PROT}\n\nint	main(void)\n{\n\t${FUNC}(${PARAV});\n\treturn (0);\n}\n

MAKEFLAGS += --silent
BASH := sh

all: ${OUTS}
	${CC} ${CFLAGS} ${OBJECT} -o ${EXEC}

main: 
	echo -e "${MAINFILE2}" > main.c

mainp: 
	echo -e "${MAINFILE}" > main.c

mainr: ${OUTS}
	${CC} ${CFLAGS} ${OBJECT} main.c -o ${EXEC}

mainre: fclean main mainr

clean:
	${CLEAN} ${OBJECT}

fclean: clean
	${CLEAN} ${EXEC} main.c

re: fclean all
