void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *last;

    last = *lst;
    while (last->next)
    {
        last = last->next;
    }
    last->next = new;
}