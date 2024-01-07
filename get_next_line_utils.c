#include"get_next_line.h"

void    *ft_ca(int c, int s)
{
    unsigned char   *p;
    int             i;

    i = c * s;
    p = malloc(i);
    while (i > 0)
        p[i--] = 0;
    return (p);
}

char    *ft_sj(char *l, char *p)
{
    char *r;

    while (l && *l)
        *r++ = *l++;
    while (*p && *p != '\n')
        *r++ = *p++;
    return (r);
}