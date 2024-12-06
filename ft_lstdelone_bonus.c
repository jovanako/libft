void    ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst)
    {
        if (lst->content)
        {
            (*del)(lst->content);
            free(lst);
        }
    }
}