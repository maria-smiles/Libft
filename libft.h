#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
char	*ft_strnstr (const char *big, const char *little, size_t len);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
void	*ft_memset (void *destination, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy (void *destination, const void *source, size_t n);
void	*ft_memccpy (void *destination, const void *source, int c, size_t n);
void	*ft_memmove (void *destination, const void *source, size_t n);
void	*ft_memchr (const void *arr, int c, size_t n);
int		ft_memcmp (const void *arr1, const void *arr2, size_t n);
int		ft_atoi (const char *str);
int		ft_isalpha(int ch);
int		ft_isdigit(int ch);
int		ft_isalnum(int ch);
int		ft_isascii(int ch);
int		ft_isprint(int ch);
int		ft_toupper(int ch);
int		ft_tolower(int ch);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t num, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

#endif
