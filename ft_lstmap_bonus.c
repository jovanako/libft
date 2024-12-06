#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *current;
    t_list  *result;
    void    *new_content;

    current = lst;
    while (current)
    {
        new_content = f(current->content);
        result = (t_list *)malloc(sizeof(t_list));
        if (!result)
        {
            del(result->content);
            free(result);
            return (NULL);
        }
        result->content = new_content;
        result = result->next; 
        current = current->next;

    }
    return (result);
}