SRCS =	ft_atoi.c		ft_bzero.c		ft_calloc.c		ft_isalnum.c\
		ft_isalpha.c	ft_isascii.c	ft_isdigit.c	ft_isprint.c\
		ft_itoa.c 		ft_memccpy.c 	ft_memchr.c		ft_memcmp.c\
		ft_memcpy.c 	ft_memmove.c 	ft_memset.c 	ft_putchar_fd.c\
 		ft_putendl_fd.c	ft_putnbr_fd.c 	ft_putstr_fd.c 	ft_split.c\
		ft_strchr.c		ft_strdup.c		ft_strjoin.c 	ft_strlcat.c\
	   	ft_strlcpy.c 	ft_strlen.c		ft_strmapi.c 	ft_strncmp.c\
		ft_strnstr.c 	ft_strrchr.c 	ft_strtrim.c	ft_substr.c\
	   	ft_tolower.c 	ft_toupper.c

FLAGS = -Wall -Wextra -Werror -g

HEAD = libft.h

NAME = libft.a

OBJS = $(patsubst %.c, %.o, $(SRCS))

all: $(NAME)

#tests
TEST_STRCHR = test_strchr.c
test_strchr:
	gcc $(FLAGS) $(TEST_STRCHR) -L. -lft $(HEAD) -o test_strchr.out
TEST_STRRCHR = test_strrchr.c
test_strrchr:
	gcc $(FLAGS) $(TEST_STRRCHR) -L. -lft $(HEAD) -o test_strrchr.out
TEST_ITOA = test_itoa.c
test_itoa:
	gcc $(FLAGS) $(TEST_ITOA) -L. -lft $(HEAD) -o test_itoa.out
TEST_SUBSTR = test_substr.c
test_itoa:
	gcc $(FLAGS) $(TEST_SUBSTR) -L. -lft $(HEAD) -o test_substr.out


tests: re test_strrchr test_strchr test_itoa test_substr.c
#end tests

$(NAME): $(OBJS)
	ar rcs $(NAME) $?

re: fclean all

%.o: %c
	gcc $(FLAGS) -c $< -o $@

so:
	cc -fPIC $(FLAGS) $(SRCS)
	gcc -shared -o libft.so $(OBJS)
	
clean: 
	$(RM) $(OBJS) *.gch

fclean: clean
	$(RM) $(NAME) *.out *.so

.PHONY: libft.a all clean fclean re

ifdef OS
   RM = del /Q
   FixPath = $(subst /,\,$1)
else
   ifeq ($(shell uname), Linux)
      RM = rm -f
      FixPath = $1
   endif
endif
