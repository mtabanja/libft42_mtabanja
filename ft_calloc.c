#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (0);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main()
// {
//     printf("%s", (char*)ft_calloc(5,sizeof(int)));
// }