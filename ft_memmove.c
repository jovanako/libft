#include "libft.h"

void    *ft_memmove(void *dest, const void *src, size_t n)
{
    unsigned char *d;
    unsigned char *s;
    size_t  dest_end_index;
    size_t  i;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    i = 0;
    dest_end_index = ft_strlen(dest);
    if (d[i] < s[n])
    {
        while (n > 0)
        {
            d[dest_end_index--] = s[n--];
        }
    }
}