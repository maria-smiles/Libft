#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_strlcat.c"
#include <string.h>

int main()
{



}

/*
  #include <stdlib.h>

#include <unistd.h>

#include "../../../libft.h"

#include <string.h>

​

void	ft_print_result(int n)

{

	char c;

​

	if (n >= 10)

		ft_print_result(n / 10);

	c = n % 10 + '0';

	write (1, &c, 1);

}

​

int		main(int argc, const char *argv[])

{

	char	*dest;

	int		arg;

​

	alarm(5);

	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)

		return (0);

	memset(dest, 0, 15);

	memset(dest, 'r', 6);

	if ((arg = atoi(argv[1])) == 1)

	{

		dest[11] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 2)

	{

		ft_print_result(ft_strlcat(dest, "", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 3)

	{

		dest[0] = '\0';

		dest[11] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 4)

	{

		dest[14] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 5)

	{

		dest[10] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 6)

	{

		dest[10] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 7)

	{

		memset(dest, 'r', 15);

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 8)

	{

		dest[10] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 6));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	else if (arg == 9)

	{

		memset(dest, 'r', 14);

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	return (0);

}

#include <stdlib.h>

#include <unistd.h>

#include "../../../libft.h"

​

void	ft_print_result(char const *s)

{

	int		len;

​

	len = 0;

	while (s[len])

		len++;

	write(1, s, len);

}

​

int		main(int argc, const char *argv[])

{

	char	s1[] = "lorem ipsum";

	char	s2[] = "dolor sit amet";

	char	*strjoin;

	int		arg;

​

	alarm(5);

	if (argc == 1)

		return (0);

	else if ((arg = atoi(argv[1])) == 1)

	{

		if (!(strjoin = ft_strjoin(s1, s2)))

			ft_print_result("NULL");

		else

			ft_print_result(strjoin);

		if (strjoin == s1 || strjoin == s2)

			ft_print_result("\nA new string was not returned");

	}

	else if (arg == 2)

	{

		s1[0] = '\0';

		if (!(strjoin = ft_strjoin(s1, s2)))

			ft_print_result("NULL");

		else

			ft_print_result(strjoin);

		if (strjoin == s1 || strjoin == s2)

			ft_print_result("\nA new string was not returned");

	}

	else if (arg == 3)

	{

		s2[0] = '\0';

		if (!(strjoin = ft_strjoin(s1, s2)))

			ft_print_result("NULL");

		else

			ft_print_result(strjoin);

		if (strjoin == s1 || strjoin == s2)

			ft_print_result("\nA new string was not returned");

	}

	else if (arg == 4)

	{

		s1[0] = '\0';

		s2[0] = '\0';

		if (!(strjoin = ft_strjoin(s1, s2)))

			ft_print_result("NULL");

		else

			ft_print_result(strjoin);

		if (strjoin == s1 || strjoin == s2)

			ft_print_result("\nA new string was not returned");

	}

	return (0);

}
#include <stdlib.h>

#include <unistd.h>

#include "../../../libft.h"

​

void	ft_print_result(char const *s)

{

	int		len;

​

	len = 0;

	while (s[len])

		len++;

	write(1, s, len);

}

​

int		main(int argc, const char *argv[])

{

	int		arg;

​

	alarm(5);

	if (argc == 1)

		return (0);

	else if ((arg = atoi(argv[1])) == 1)

	{

		char *res = ft_itoa(0);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 2)

	{

		char *res = ft_itoa(9);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 3)

	{

		char *res = ft_itoa(-9);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 4)

	{

		char *res = ft_itoa(10);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 5)

	{

		char *res = ft_itoa(-10);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 6)

	{

		char *res = ft_itoa(8124);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 7)

	{

		char *res = ft_itoa(-9874);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 8)

	{

		char *res = ft_itoa(543000);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 9)

	{

		char *res = ft_itoa(-2147483648LL);

		ft_print_result(res);

		free(res);

	}

	else if (arg == 10)

	{

		char *res = ft_itoa(2147483647);

		ft_print_result(res);

		free(res);

	}

	return (0);

}



= Host-specific information ====================================================

$> hostname; uname -msr

vo-k7.msk.21-school.ru

Darwin 18.7.0 x86_64

$> date

Thu May 20 14:12:20 MSK 2021

$> gcc --version

Apple clang version 11.0.0 (clang-1100.0.33.17)

Target: x86_64-apple-darwin18.7.0

Thread model: posix

InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin

$> clang --version

Apple clang version 11.0.0 (clang-1100.0.33.17)

Target: x86_64-apple-darwin18.7.0

Thread model: posix

InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin

= libft.h=======================================================================

$> norminette libft.h | grep -E '(Error|Warning)'

= Compiling libft ==============================================================

$> make re

rm -f ft_strlen.o ft_memset.o ft_bzero.o ft_calloc.o ft_strlcpy.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_isalnum.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_putchar_fd.o ft_memccpy.o ft_putstr_fd.o ft_split.o ft_putnbr_fd.o ft_putendl_fd.o ft_strchr.o ft_strdup.o ft_strjoin.o ft_strlcat.o ft_atoi.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o

rm -f libft.a *.out

gcc -Wall -Wextra -Werror -c ft_strlen.c -o ft_strlen.o

gcc -Wall -Wextra -Werror -c ft_memset.c -o ft_memset.o

gcc -Wall -Wextra -Werror -c ft_bzero.c -o ft_bzero.o

gcc -Wall -Wextra -Werror -c ft_calloc.c -o ft_calloc.o

gcc -Wall -Wextra -Werror -c ft_strlcpy.c -o ft_strlcpy.o

gcc -Wall -Wextra -Werror -c ft_isalpha.c -o ft_isalpha.o

gcc -Wall -Wextra -Werror -c ft_isascii.c -o ft_isascii.o

gcc -Wall -Wextra -Werror -c ft_isdigit.c -o ft_isdigit.o

gcc -Wall -Wextra -Werror -c ft_isprint.c -o ft_isprint.o

gcc -Wall -Wextra -Werror -c ft_isalnum.c -o ft_isalnum.o

gcc -Wall -Wextra -Werror -c ft_itoa.c -o ft_itoa.o

gcc -Wall -Wextra -Werror -c ft_memchr.c -o ft_memchr.o

gcc -Wall -Wextra -Werror -c ft_memcmp.c -o ft_memcmp.o

gcc -Wall -Wextra -Werror -c ft_memcpy.c -o ft_memcpy.o

gcc -Wall -Wextra -Werror -c ft_memmove.c -o ft_memmove.o

gcc -Wall -Wextra -Werror -c ft_putchar_fd.c -o ft_putchar_fd.o

gcc -Wall -Wextra -Werror -c ft_memccpy.c -o ft_memccpy.o

gcc -Wall -Wextra -Werror -c ft_putstr_fd.c -o ft_putstr_fd.o

gcc -Wall -Wextra -Werror -c ft_split.c -o ft_split.o

gcc -Wall -Wextra -Werror -c ft_putnbr_fd.c -o ft_putnbr_fd.o

gcc -Wall -Wextra -Werror -c ft_putendl_fd.c -o ft_putendl_fd.o

gcc -Wall -Wextra -Werror -c ft_strchr.c -o ft_strchr.o

gcc -Wall -Wextra -Werror -c ft_strdup.c -o ft_strdup.o

gcc -Wall -Wextra -Werror -c ft_strjoin.c -o ft_strjoin.o

gcc -Wall -Wextra -Werror -c ft_strlcat.c -o ft_strlcat.o

gcc -Wall -Wextra -Werror -c ft_atoi.c -o ft_atoi.o

gcc -Wall -Wextra -Werror -c ft_strmapi.c -o ft_strmapi.o

gcc -Wall -Wextra -Werror -c ft_strncmp.c -o ft_strncmp.o

gcc -Wall -Wextra -Werror -c ft_strnstr.c -o ft_strnstr.o

gcc -Wall -Wextra -Werror -c ft_strrchr.c -o ft_strrchr.o

gcc -Wall -Wextra -Werror -c ft_strtrim.c -o ft_strtrim.o

gcc -Wall -Wextra -Werror -c ft_substr.c -o ft_substr.o

gcc -Wall -Wextra -Werror -c ft_tolower.c -o ft_tolower.o

gcc -Wall -Wextra -Werror -c ft_toupper.c -o ft_toupper.o

ar rcs libft.a ft_strlen.o ft_memset.o ft_bzero.o ft_calloc.o ft_strlcpy.o ft_isalpha.o ft_isascii.o ft_isdigit.o ft_isprint.o ft_isalnum.o ft_itoa.o ft_memchr.o ft_memcmp.o ft_memcpy.o ft_memmove.o ft_putchar_fd.o ft_memccpy.o ft_putstr_fd.o ft_split.o ft_putnbr_fd.o ft_putendl_fd.o ft_strchr.o ft_strdup.o ft_strjoin.o ft_strlcat.o ft_atoi.o ft_strmapi.o ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o ft_tolower.o ft_toupper.o libft.h

$> make bonus

make: *** No rule to make target `bonus'.  Stop.

$> ls -la libft.a

-rw-r--r--  1 sgummy  4221  36704 May 20 14:12 /Users/sgummy/Desktop/libft-war-machine/dirlibft/libft.a

= Part1_functions ==============================================================

= ft_memset.c ==================================================================

$> norminette ft_memset.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_memset.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe 03

$> diff -U 3 user_output_test03 test03.output

Diff OK :D

= Test 4 ===================================================

$> ./user_exe 04

$> diff -U 3 user_output_test04 test04.output

Diff OK :D

= ft_bzero.c ===================================================================

$> norminette ft_bzero.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_bzero.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= ft_calloc.c ==================================================================

$> norminette ft_calloc.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_calloc.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= ft_memcpy.c ==================================================================

$> norminette ft_memcpy.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_memcpy.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe 03

$> diff -U 3 user_output_test03 test03.output

Diff OK :D

= ft_memccpy.c =================================================================

$> norminette ft_memccpy.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_memccpy.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe 03

$> diff -U 3 user_output_test03 test03.output

Diff OK :D

= Test 4 ===================================================

$> ./user_exe 04

$> diff -U 3 user_output_test04 test04.output

Diff OK :D

= ft_memmove.c =================================================================

$> norminette ft_memmove.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_memmove.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe 03

$> diff -U 3 user_output_test03 test03.output

Diff OK :D

= Test 4 ===================================================

$> ./user_exe 04

$> diff -U 3 user_output_test04 test04.output

Diff OK :D

= Test 5 ===================================================

$> ./user_exe 05

$> diff -U 3 user_output_test05 test05.output

Diff OK :D

= ft_memchr.c ==================================================================

$> norminette ft_memchr.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_memchr.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe 03

$> diff -U 3 user_output_test03 test03.output

Diff OK :D

= Test 4 ===================================================

$> ./user_exe 04

$> diff -U 3 user_output_test04 test04.output

Diff OK :D

= Test 5 ===================================================

$> ./user_exe 05

$> diff -U 3 user_output_test05 test05.output

Diff OK :D

= Test 6 ===================================================

$> ./user_exe 06

$> diff -U 3 user_output_test06 test06.output

Diff OK :D

= ft_memcmp.c ==================================================================

$> norminette ft_memcmp.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_memcmp.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe 03

$> diff -U 3 user_output_test03 test03.output

Diff OK :D

= Test 4 ===================================================

$> ./user_exe 04

$> diff -U 3 user_output_test04 test04.output

Diff OK :D

= Test 5 ===================================================

$> ./user_exe 05

$> diff -U 3 user_output_test05 test05.output

Diff OK :D

= Test 6 ===================================================

$> ./user_exe 06

$> diff -U 3 user_output_test06 test06.output

Diff OK :D

= Test 7 ===================================================

$> ./user_exe 07

$> diff -U 3 user_output_test07 test07.output

Diff OK :D

= Test 8 ===================================================

$> ./user_exe 08

$> diff -U 3 user_output_test08 test08.output

Diff OK :D

= Test 9 ===================================================

$> ./user_exe 09

$> diff -U 3 user_output_test09 test09.output

Diff OK :D

= ft_strlen.c ==================================================================

$> norminette ft_strlen.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_strlen.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe 03

$> diff -U 3 user_output_test03 test03.output

Diff OK :D

= Test 4 ===================================================

$> ./user_exe 04

$> diff -U 3 user_output_test04 test04.output

Diff OK :D

= Test 5 ===================================================

$> ./user_exe 05

$> diff -U 3 user_output_test05 test05.output

Diff OK :D

= Test 6 ===================================================

$> ./user_exe 06

$> diff -U 3 user_output_test06 test06.output

Diff OK :D

= ft_strdup.c ==================================================================

$> norminette ft_strdup.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_strdup.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= ft_strlcat.c =================================================================

$> norminette ft_strlcat.c | grep -E '(Error|Warning)'

$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_strlcat.c main.c libft.a -o user_exe

= Test 1 ===================================================

$> ./user_exe 01

$> diff -U 3 user_output_test01 test01.output

Diff OK :D

= Test 2 ===================================================

$> ./user_exe 02

$> diff -U 3 user_output_test02 test02.output

Diff OK :D

= Test 3 ===================================================

$> ./user_exe...
*/