SRCS = ./srcs/ft_putchar.c ./srcs/ft_swap.c ./srcs/ft_putstr.c ./srcs/ft_strlen.c ./srcs/ft_strcmp.c
GCC = gcc
OBJ = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
LIB = libft.a	
INCS = ./includes/
IFLAGS = -I$(INCS)

all: ${LIB}

.c.o:
	${GCC} ${CFLAGS} ${IFLAGS}  -c $< -o $@

${LIB}: ${OBJ}
	ar rc ${LIB} ${OBJ}


clean:
	rm -f ${OBJ}


fclean: clean
	rm -f ${LIB}

re: fclean all

