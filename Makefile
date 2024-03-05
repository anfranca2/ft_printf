NAME = libftprintf.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_char.c ft_hexalow.c ft_hexaup.c ft_numbers.c ft_pointers.c ft_printf.c \
	  ft_strings.c ft_unsigned.c 

OBJS = ${SRCS:.c=.o}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS}

%.o : %.c Makefile ft_printf.h 
	${CC} ${CFLAGS} -c $<

clean:
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: all clean fclean re
