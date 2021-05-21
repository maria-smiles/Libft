#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_strnstr.c"
#include <string.h>
static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strnstr(char *big, char *little, size_t len)
{
	const char *str;

	if (!(str = ft_strnstr(big, little, len)))
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

int				main()
{
printf("\n1)\n");
		check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	printf("\n2)\n");
		check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	printf("\n3)\n");
		check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	printf("\n4)\n");
		check_strnstr("lorem ipsum dolor sit amet", "", 10);
	printf("\n5)\n");
		check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	printf("\n6)\n");
		check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	printf("\n7)\n");
		check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	printf("\n8)\n");
		check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	printf("\n9)\n");
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("\n10)\n");
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);

	printf("\n11)\n");

	//[fail]: your strnstr does not work with empty strings and 0 length
	//Test code:

	char *s1 = "AAAAAAAAAAAAA";
	size_t max = strlen(s1);

			check_strnstr(s1, s1, max);

//	Diffs:
//				strnstr: |AAAAAAAAAAAAA|
//			 ft_strnstr: |(null)|

	printf("\n12)\n");

//	[no crash]: your strnstr does not segfault when null parameter is sent
//	Test code:

	check_strnstr(((void *)0), "fake", 3);


	printf("\n13)\n");
	check_strnstr("", "", 0);

	printf("\n14)\n");
	check_strnstr("", (void *)0, 0);
	printf("\n15)\n");
	check_strnstr("", (void *)0, 10);



	printf("\n16)\n");
	check_strnstr((void *)0, (void *)0, 0);
	printf("\n17)\n");
	check_strnstr((void *)0, (void *)0, 4);


	char haystack[30] = "aaabcabcd";
	char needle[10] = "aabc";
	char * empty = (char*)"";

	printf("\n18)\n");
	/* 1 */ check_strnstr(haystack, needle, 0);
	printf("\n19)\n");

	/* 2 */ check_strnstr(haystack, needle, -1);

	printf("\n20)\n");
	/* 3 */ check_strnstr(haystack, "a", -1);

	printf("\n21)\n");
	/* 4 */ check_strnstr(haystack, "c", -1);
	printf("\n22)\n");

	/* 5 */ check_strnstr(empty, "", -1);
	printf("\n23)\n");

	/* 6 */ check_strnstr(empty, "", 0);
	printf("\n24)\n");

	/* 7 */ check_strnstr(empty, "coucou", -1);

	printf("\n25)\n");
	/* 8 */ check_strnstr(haystack, "aaabc", 5);

	printf("\n26)\n");
	/* 9 */ check_strnstr(empty, "12345", 5);
	printf("\n27)\n");

	/* 10 */ check_strnstr(haystack, "abcd", 9);
	printf("\n28)\n");

	/* 11 */ check_strnstr(haystack, "cd", 8);
	printf("\n29)\n");

	/* 12 mbueno-g */ check_strnstr(haystack, "a", 1);
//	printf("\n30)\n");
//	check_strnstr("", "ddddd", -1);
	printf("\n30\n");
	s1 = "FF";
	char *s2 = "see F your F return F now F";
	max = strlen(s2);

	check_strnstr(s1, s2, max);



printf("\n31)\n");

// [fail]: your strnstr does not work with basic input
//Test code:
    s1 = "FF";
    s2 = "see F your F return F now F";
    max = strlen(s2);

	check_strnstr(s1, s2, max);

//    char *i1 = (char *) strnstr(s1, s2, max);
//    char *i2 = ft_strnstr(s1, s2, max);
//    if (i1 == i2)
//		printf("\nok\n");
//	else
//	printf("\nko\n");



// ft_strnstr: |see F your F return F now FF”;
//	printf("\n32)\n");
//	char *i1 = strstr(s1, s2);
//	char *i2 = ft_strstr(s1, s2);
//	if (i1 == i2) exit(TEST_SUCCESS);
//	lseek(g_diff_fd, 0, 0);
//	dprintf(g_diff_fd, “%12s: |%.300s|\n%12s: |%.300s|“,
//		 current_fun_name + 3, (char*)i1, current_fun_name, (char*)i2);
//
//	write(g_diff_fd, “\0”, 1);
//	; exit(TEST_|[fail]: your strnstr does not work with basic input
//Test code:
	printf("\n33)\n");
    char *big = "abcdef";
    char *little = "abcdefghijklmnop";
    max = strlen(big);
	check_strnstr(big, little, max);
//    s1 = strnstr(big, little, max);
//    s2 = ft_strnstr(big, little, max);    if (s1 == s2)
//		printf("\nok\n");
//	else
//		printf("\nko\n");

//   strnstr: |(null)|
// ft_strnstr: |abcdef|[fail]: your strnstr does not work with not found patern
//Test code:
	printf("\n34)\n");
    s1 = "FF";
    s2 = "see FF your FF return FF now FF";
	check_strnstr(s1, s2, 4);
//    i1 = (char *) strnstr(s1, s2, 4);
//    i2 = ft_strnstr(s1, s2, 4);
//    if (i1 == i2)
//		printf("\nok\n");
//	else
//		printf("\nko\n");

//    Diffs:
//   strnstr: |(null)|
// ft_strnstr: |see FF your FF return FF now FF|[fail]: your strnstr does not work with empty strings
//Test code:
	printf("\n35)\n");
    s1 = "oh no not the empty string !";
    s2 = "";
    max = strlen(s1);
	check_strnstr(s1, s2, max);
//    i1 = (char *) strnstr(s1, s2, max);
//    i2 = ft_strnstr(s1, s2, max);
//    if (i1 == i2)
//		printf("\nok\n");
//	else
//		printf("\nko\n");

//    Diffs:
//   strnstr: |oh no not the empty string !|
// ft_strnstr: ||[fail]: your strnstr does not work with empty strings and 0 length
//Test code:
	printf("\n36)\n");
    s1 = "oh no not the empty string !";
    s2 = "";
    max = 0;
	check_strnstr(s1, s2, max);
//    i1 = strnstr(s1, s2, max);
//    i2 = ft_strnstr(s1, s2, max);    if (i1 == i2)
//		printf("\nok\n");
//	else
//		printf("\nko\n");

//    Diffs:
//   strnstr: |oh no not the empty string !|
// ft_strnstr: |(null)|[no crash]: your strnstr does not segfault when null parameter is sent




	return (0);
}

/*
сама функция в двух вариантах

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lit_len;
//	size_t	big_len;
//	size_t	lim;
//	size_t	ilim;
//
	i = 0;
	if (!big || !little)
		return (NULL);
	if ((!*little) || (big == little && big[0] == '\0'))
		return ((char *)big);
	if ((len == 0 && big[0] != '\0') || (little[0] != '\0' && big[0] == '\0'))
		return (0);
	lit_len = ft_strlen(little);
//	big_len = ft_strlen(big);
//	if ((len <= big_len && big_len <= lit_len) || (len <= lit_len && lit_len <=
//	big_len))
//	{
//		lim = len;
//		ilim = 1;
//	}
//	else if ((big_len < lit_len && lit_len < len) || (big_len < len && len <
//	lit_len))
//	{
//		lim = big_len;
//		ilim = 1;
//	}
//	else if (lit_len < big_len && big_len < len)
//	{
//		lim = lit_len;
//		ilim = big_len - lit_len + 1;
//	}
//	else //lit_len < big_len && len < big_len
//	{
//		lim = len - lit_len + 1;
//		ilim = lim;
//	}
//	while (i < ilim)
//	{
//		if (big[0] == little[0] && ((ft_strncmp(big, little, lim)) == 0))
//			return ((char *) big);
//		big++;
//		i++;
//	}

	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0' \
				&& big[i + j] == little[j] && i + j < len)
			j++;
		if (j == lit_len)
			return ((char *) big + i);
		i++;
	}
	return (NULL);

}
 */