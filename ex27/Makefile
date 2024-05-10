SRC = ft_display_file.c
CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
EXEC = ft_display_file
OBJ = program

all: $(SRC)
	$(CC) -c $(SRC) -o $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(EXEC)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(EXEC)

re: fclean all
