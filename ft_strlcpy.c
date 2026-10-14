#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    size_t i;

     i = 0;
     
    while ((dstsize != 0) && ( src[i] != '\0') && (i < dstsize - 1))
    {
        dst[i] = src[i];
        i ++;
    }
    if (dstsize > 0)
        dst[i] = '\0';

        return (ft_strlen(src));
}