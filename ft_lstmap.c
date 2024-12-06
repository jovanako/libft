#include "libft.h"

static void	*free_node(t_list *node, void (*del)(void *))
{
	del(node->content);
	free(node);
	return (NULL);
}

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
		t_list	*result;
		t_list	*node;
		void	*new_content;
		
		if (lst == NULL)
			return (NULL);
		node = NULL;
		result = node;
		while (lst)
		{
				new_content = f(lst->content);
				node = ft_lstnew(new_content);
				if (node == NULL)
					free_node(node, del);
				node->content = new_content;
				node = node->next;
				lst = lst->next;
		}
		return (result);
}