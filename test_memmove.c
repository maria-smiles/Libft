#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "ft_memmove.c"

static void		check_memmove(void *dest, void *src, int n)
{
	if (dest != ft_memmove(dest, src, n))
		write(1, "dest's adress was not returned\n", 31);
	write(1, dest, 22);
}

int				main()
{
	char	src[] = "lorem ipsum dolor sit amet";
	char	*dest;

	dest = src + 1;
	printf("\ntest 1\n");
		check_memmove(dest, "consectetur", 5);
	printf("\ntest 2\n");
		check_memmove(dest, "con\0sec\0\0te\0tur", 10);
	printf("\ntest 3\n");
		check_memmove(dest, src, 8);
	printf("\ntest 4\n");
		check_memmove(src, dest, 8);
	printf("\ntest 5\n");
		check_memmove(src, dest, 0);


char s[] = {65, 66, 67, 68, 69, 0, 45};
char s0[] = { 0,  0,  0,  0,  0,  0, 0};
//char sCpy[] = {65, 66, 67, 68, 69, 0, 45};
char sResult[] = {67, 68, 67, 68, 69, 0, 45};
char sResult2[] = {67, 67, 68, 68, 69, 0, 45};
	printf("\ntest 6\n");
/* 1 */ check_memmove(s0, s, 7); //Post 0
	printf("\ntest 7\n");
/* 2 */ check_memmove(s, s + 2, 0); //0 move
	printf("\ntest 8\n");
/* 3 */ check_memmove(s, s + 2, 2); //forward
	printf("\ntest 9\n");
/* 4 */ check_memmove(sResult + 1, sResult, 2);
	check_memmove(sResult, sResult2, 7); //reverse

	return (0);
}