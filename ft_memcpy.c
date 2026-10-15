#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{

    unsigned char *ds;
    const unsigned char *sr;

    ds = (unsigned char *) dst;
    sr = (const unsigned char *) src;
    
    while (n--)
    {
        *ds = *sr;  

        ds ++;
        sr ++;
    }

    return (dst);
}