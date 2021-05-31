//
// Created by Leann Alaskan on 5/25/21.
//

#ifndef GNL_GET_NEXT_LINE_H
#define GNL_GET_NEXT_LINE_H

//#include "get_next_line_utils.h"
#include <stdlib.h>
#include <unistd.h>

#ifndef BUFFER_SIZE
	#define BUFFER_SIZE 10
#endif

int get_next_line(int fd, char **line);
size_t	ft_strlen(const char *str);
void	*ft_memset (void *destination, int c, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strdup(const char *s1);

#endif //GNL_GET_NEXT_LINE_H
