

void check(bool succes)
{
	if (succes)
	{std::ostringstream ss; ss << FG_GREEN << iTest++ << ".OK "; write(1, ss.str().c_str(), ss.str().size());}
	else
	{std::ostringstream ss; ss << FG_RED << iTest++ << ".KO "; write(1, ss.str().c_str(), ss.str().size());}
}

void mcheck(void * p, size_t required_size)
{
	void * p2 = malloc(required_size);
#ifdef __unix__
	if (malloc_usable_size(p) == malloc_usable_size(p2))
#endif
#ifdef __APPLE__
	if (malloc_size(p) == malloc_size(p2))
#endif
	{std::ostringstream ss; ss << FG_GREEN << iTest++ << ".MOK "; write(1, ss.str().c_str(), ss.str().size());}
	else
	{std::ostringstream ss; ss << FG_RED << iTest++ << ".MKO "; write(1, ss.str().c_str(), ss.str().size());}
	free(p2);
}

int main()
{
	char src[] = "coucou";
	char dest[10];
	memset(dest, 'A', 10);
/* 1 */ check(ft_strlcpy(dest, src, 0) == strlen(src) && dest[0] == 'A');
	showLeaks();
/* 2 */ check(ft_strlcpy(dest, src, 1) == strlen(src) && dest[0] == 0 &&
			  dest[1] == 'A');
	showLeaks();
/* 3 */ check(ft_strlcpy(dest, src, 2) == strlen(src) && dest[0] == 'c' &&
			  dest[1] == 0 && dest[2] == 'A');
	showLeaks();
/* 4 */ check(ft_strlcpy(dest, src, -1) == strlen(src) && !strcmp(src, dest) &&
			  dest[strlen(src) + 1] == 'A');
	showLeaks();
	memset(dest, 'A', 10);
/* 5 */ check(
			ft_strlcpy(dest, src, 6) == strlen(src) && !memcmp(src, dest, 5) &&
			dest[5] == 0);
	showLeaks();
	memset(dest, 'A', 10);
/* 6 */ check(ft_strlcpy(dest, src, 7) == strlen(src) && !memcmp(src, dest, 7));
	showLeaks();
	memset(dest, 'A', 10);
/* 7 */ check(ft_strlcpy(dest, src, 8) == strlen(src) && !memcmp(src, dest, 7));
	showLeaks();
	memset(dest, 'A', 10);
/* 8 */ check(ft_strlcpy(dest, "", 42) == 0 && !memcmp("", dest, 1));
	showLeaks();
	memset(dest, 0, 10);
/* 9 */ check(ft_strlcpy(dest, "1", 0) == 1 && dest[0] == 0);
	showLeaks();

	memset(dest, 'A', 10);


}


