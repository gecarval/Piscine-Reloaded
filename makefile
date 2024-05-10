#--------------COMPILE-----------------#
CC = gcc
EXEC = teste.exe
CFLAGS = -Wall -Wextra -Werror
CLEAN = rm -f
#--------------FUNCTION-----------------#
FUNC = ft_sqrt
RETURN = int
PARAM = int nb
PRINT = %d
PARAV = 268435456
#--------------PATHS-----------------#
EXER = ./ex23/
INC = ./includes/
PROT = ${RETURN} ${FUNC}(${PARAM});
#--------------COMPILEOBJECTS-----------------#
CFILES = ${EXER}*.c ${INC}ft_putchar.c
OBJECT = ${EXER}*.o
OUTS = $(CFILES:.c=.o)
#--------------MAIN-----------------#
MAINFILE := \#include <stdio.h>\n\n${PROT}\n\nint	main(void)\n{\n\tprintf(\"${PRINT}\t\t\t\", ${FUNC}(${PARAV}));\n\treturn (0);\n}\n
MAINFILE2 := \#include <stdio.h>\n\n${PROT}\n\nint	main(void)\n{\n\t${FUNC}(${PARAV});\n\treturn (0);\n}\n
#--------------MAKEFLAG-----------------#
MAKEFLAGS += --silent
BASH := sh
#--------------COMPILE-----------------#
all: ${OUTS}
	time ${CC} ${CFLAGS} ${OBJECT} -o ${EXEC}

mainr: ${OUTS}
	time ${CC} ${CFLAGS} ${OBJECT} main.c -o ${EXEC}

mainrx: mainr
	time ./${EXEC}

mainre: fclean main mainr
#--------------MAINCOMPILE-----------------#
main: 
	echo -e "${MAINFILE2}" > main.c

mainp: 
	echo -e "${MAINFILE}" > main.c
#--------------CLEAN-----------------#
clean:
	${CLEAN} ${OBJECT}

fclean: clean
	${CLEAN} ${EXEC} main.c

re: fclean all