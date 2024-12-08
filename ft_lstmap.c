#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*result;
	t_list	*node;
	void	*new_content;

	if (!lst)
		return (NULL);
	new_content = f(lst->content);
	result = ft_lstnew(new_content);
	if (result == NULL)
	{
		del(new_content);
		return (NULL);
	}
	node = result;
	lst = lst->next;
	while (lst)
	{
		new_content = f(lst->content);
		node->next = ft_lstnew(new_content);
		if (node->next == NULL)
		{
			del(new_content);
			ft_lstclear(&result, del);
			return (NULL);
		}
		node = node->next;
		lst = lst->next;
	}
	return (result);
}
