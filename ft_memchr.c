#include "libft.h"

void *memchr(const void *s, int c, size_t n)
{
    const unsigned char *p;
    size_t i;

    p = (const unsigned char *)s;
    i = 0;

    while (i < n)
    {
        if (*p == (unsigned char)c)
        {
            return ((void *)p);
        }
        i ++;
        p ++;
    }

    return (NULL);
}