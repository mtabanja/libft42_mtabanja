#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *temp;

	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
	*lst = NULL;
}

// void del()
// {
// 	printf("nothing");
// }


// int main()
// {
// 	t_list *new;

// 	new->content = "koko";
// 	ft_lstclear(&new,del);
// }