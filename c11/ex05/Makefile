SRCS = ./do_op.c ./ft_putnbr.c ./ft_atoi.c
GCC = gcc
OBJS = do_op.o ft_putnbr.o ft_atoi.o
CFLAGS = -Wall -Wextra -Werror

NAME = do-op

all: ${NAME}

${NAME}: ${OBJS}
	${GCC} ${CFLAGS} -o ${NAME} ${SRCS}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re do-op
