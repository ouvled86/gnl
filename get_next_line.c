#include "get_next_line.h"

char    *al_sp(char *p, int fd)
{
    if (fd < 0 || fd > OPEN_MAX || BUFFER_SIZE <= 0
         || BUFFER_SIZE > INT_MAX || read(fd, p, 0) < 0)
        return (free(p), p = NULL, NULL);
    if (!p)
        p = ft_ca(BUFFER_SIZE + 1, 1);
    if (!p)
        return (NULL);
    return (p);
}

char    *get_next_line(int fd)
{
    static char *p;
    char        *l;
    int         i;

    p = al_sp(p, fd);
    l = ft_sj(NULL, p);
    i = 1;
}