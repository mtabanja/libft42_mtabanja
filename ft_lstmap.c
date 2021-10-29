#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first_list;

	if(!lst)
		return (0);
	new = ft_lstnew((f)(lst->content));
	if (!new)
		return (0);
	first_list = new;
	lst = lst->next;
	// new = new->next;
	while (lst)
	{
		new->next = ft_lstnew((f)(lst->content));
		if (!new->next)
		{
			(del)(new->next);
			free(new->next);
			break;
		}
		lst = lst->next;
		new = new->next;
	}
	return (first_list);
}
