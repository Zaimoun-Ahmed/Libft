    #include "libft.h"

    void	*ft_memset(void *s, int c, size_t n)
    {  
        unsigned char l;
        unsigned char *p;

        l = c;
        p = (unsigned char *)s;
        while (n --)
        {
            *p = l;
            p++;
        }

        return (s);
    }
    