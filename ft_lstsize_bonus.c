int ft_lstsize(t_list *lst)
{
    int     count;
    t_list  *current;
    
    current = lst;
    count = 0;
    while (current->next)
    {
        count++;
        current = current->next;
    }
    return (count);
}