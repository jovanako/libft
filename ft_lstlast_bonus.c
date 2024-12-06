#include "libft.h"

t_list  *ft_lstlast(t_list *lst)
{
    t_list  current;

    last = lst;
    while (last->next)
    {
        if (last->next == NULL)
        return (last);
    }
}