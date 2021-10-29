#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && dst != src)
	{
		*(char *)(dst + i) = *(char *)(src + i);
		i++;
	}
	return (dst);
}

// int main()
// {
//     char src[] = "src";
//     char dst[] = "des";

//     char src1[] = "src";
//     char dst1[] = "des";
// 	ft_memcpy(((void *)0), ((void *)0), 3);
//     // ft_memcpy(dst,src,sizeof(src));
//     memcpy(((void *)0), ((void *)0), 3);
//     printf("%s\n",dst);
//     printf("%s",dst1);

// }