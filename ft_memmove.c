#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *ds;
    const unsigned char *sr;
    int i;

    if (!src || !dst)
        return (NULL);

    ds = (unsigned char *)dst;
    sr = (const unsigned char *)src;
    i = 0;

    if (ds > sr)
    {
        while (len > 0)
        {
            len --;
            ds[len] = sr[len];
        }
    }
    else 
    {
        while (i < len)
        {
            ds[i] = sr[i];
            i ++;
        }
    }
    return (dst);
}