#include "libft.h"

int memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    const unsigned char *p1;
    const unsigned char *p2;

    i = 0;

    p1 = (const unsigned char *)s1;
    p2 = (const unsigned char *)s2;

    while (i < n)
    {
        if(*p1 != *p2)
        {
            return (*p1 - *p2);
        }
        p1 ++;
        p2 ++;
        i ++;
    }
    return (0);
}