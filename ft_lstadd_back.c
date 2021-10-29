#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*new_one;

	new_one = *lst;
	if (!*lst)
		*lst = new;
	while (new_one)
	{
		if (!new_one->next)
		{
			new_one->next = new;
			break ;
		}
		new_one = new_one->next;
	}
}
