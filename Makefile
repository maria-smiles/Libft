SRCS =	ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isalnum.c\
		ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c\
		ft_itoa.c ft_memccpy.c ft_memchr.c\
 		ft_memcmp.c		ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c\
 		ft_putendl_fd.c	ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
 		ft_strdup.c		ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c\
 		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c\
 		ft_substr.c ft_tolower.c ft_toupper.c

FLAGS = -Wall -Wextra -Werror

NAME = libft.a

OBJS = ${patsubst %.c, %.o, ${SRCS}}

all: ${NAME}

${NAME}: ${OBJS}
	ar rcs ${NAME} $?

%.o: %c
	gcc ${FLAGS} -c $< -o $@

so:
	cc -fPIC $(FLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)
	
clean: 
	rm -f ${OBJS}

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY: libft.a all clean fclean re