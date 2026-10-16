#include "libft.h"

char *strnstr(const char *haystack, const char *needle, size_t len)
{
    int i;
    int j;
    size_t n_size;

    n_size = ft_strlen(needle);
    i = 0;
    j = 0;

    if(len < n_size)
    {
        return (NULL);
    }
    if(n_size == 0)
    {
        return (haystack);
    }

    while (i < len)
    {

        if(haystack[i] == needle[0])
        {
            while (haystack[i] == needle[j] || haystack[i] != '\0')
            {
                i ++;
                j ++;
            }
            if(haystack[i] == '\0')
                return (haystack[i - n_size]);
        }
        j = 0;
        i ++;    
    }

    return (NULL);
}







