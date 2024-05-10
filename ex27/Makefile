CC = cc
EXEC = ft_display_file
CFLAGS = -Wall -Wextra -Werror
SRC = ft_display_file.c
RM = rm -f
OBJ = program

all: $(SRC)
    $(CC) -c $(SRC) -o $(OBJ)
    $(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

clean:
    $(RM) $(OBJ)

fclean: clean
    $(RM) $(EXEC)

re: fclean all
